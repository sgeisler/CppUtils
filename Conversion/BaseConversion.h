//
// Created by sebastian on 18.12.15.
//

#ifndef CPPUTILS_BASECONVERSION_H
#define CPPUTILS_BASECONVERSION_H

#include <vector>
#include <stdint.h>
#include <glob.h>
#include "cmath"

using std::vector;

enum class LeadingZeroHandling
{
    IGNORE_ZEROES,
    PRESERVER_ZEROES
};

template<
    class sourceType,
    class destinationType,
    uint64_t sourceBase,
    uint64_t destinationBase,
    class helperType = destinationType,
    LeadingZeroHandling z = LeadingZeroHandling::IGNORE_ZEROES,
    bool nonStandardInts = false
>
class BaseConversion
{
    static_assert(sizeof(destinationType) * 8 >= log2(destinationBase && !nonStandardInts),
                  "destination base too big for destination type");
    static_assert(log2(sourceBase) <= sizeof(helperType) * 4 && (log2(destinationBase) <= sizeof(helperType) * 4)
                      && !nonStandardInts,
                  "supplied helper type to small, has to be at least two times as big as the bigger one of the other types.");

public:
    static vector<destinationType> convert(const vector<sourceType> inp)
    {
        size_t zeroes = 0;
        auto startInpIt = inp.begin();

        while ((startInpIt != inp.end()) && ((*startInpIt) == 0))
        {
            ++zeroes;
            ++startInpIt;
        }

        vector<destinationType> res(ceil((double) inp.size() * (log(sourceBase) / log(destinationBase))));
        helperType carry;

        for (auto sourceIt = startInpIt; sourceIt != inp.end(); ++sourceIt)
        {
            carry = (*sourceIt);
            for (auto destinationIt = res.rbegin(); destinationIt != res.rend(); ++destinationIt)
            {
                carry += (*destinationIt) * sourceBase;
                (*destinationIt) = carry % destinationBase;
                carry /= destinationBase;
            }
        }

        while ((res.size() != 0) && (res.front() == 0))
        {
            res.erase(res.begin());
        }

        if (z == LeadingZeroHandling::PRESERVER_ZEROES)
        {
            res.insert(res.begin(), zeroes, 0);
        }

        return res;
    }
};


#endif //CPPUTILS_BASECONVERSION_H
