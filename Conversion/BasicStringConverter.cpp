//
// Created by sebastian on 20.12.15.
//

#include <stdexcept>
#include "BasicStringConverter.h"
vector<BasicStringConverter::arrayType> BasicStringConverter::fromString(BasicStringConverter::stringType s)
{
    vector<arrayType> res(s.size());

    for (size_t n = 0; n < s.size(); ++n)
    {
        auto pos = alphabet.find(s.at(n));

        if (pos == stringType::npos)
            throw std::runtime_error("Error: Character not in alphabet!");

        res[n] = (unsigned char) alphabet.find(s.at(n));
    }

    return res;
}
BasicStringConverter::stringType BasicStringConverter::toString(vector<BasicStringConverter::arrayType> v)
{
    stringType res(v.size(), ' ');

    for (size_t n = 0; n < v.size(); ++n)
    {
        if (v.at(n) >= alphabet.size())
            throw std::runtime_error("Error: Value out of range!");

        res[n] = alphabet.at(v.at(n));
    }

    return res;
}
BasicStringConverter::BasicStringConverter(BasicStringConverter::stringType alphabet)
    : alphabet(alphabet)
{
}
