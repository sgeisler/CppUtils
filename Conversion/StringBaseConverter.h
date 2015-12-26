//
// Created by sebastian on 21.12.15.
//

#ifndef CPPUTILS_STRINGBASECONVERTER_H
#define CPPUTILS_STRINGBASECONVERTER_H

#include <memory>

#include "BaseConversion.h"
#include "StringConverter.h"

template<size_t fromBase, size_t toBase, class arrayType = unsigned char, class stringType = std::string>
class StringBaseConverter
{
public:
    StringConverter<arrayType, stringType> *fromString;
    StringConverter<arrayType, stringType> *toString;

    StringBaseConverter(StringConverter<arrayType, stringType> *fromString)
    {
        this->fromString = fromString;
        toString = this->fromString;
    }

    StringBaseConverter(StringConverter<arrayType, stringType> *fromString,
                        StringConverter<arrayType, stringType> *toString)
    {
        this->fromString = fromString;
        this->toString = toString;
    }

    stringType convert(stringType s)
    {
        return toString->toString(BaseConversion<arrayType, arrayType, fromBase, toBase, uint64_t>::convert(fromString
                                                                                                                ->fromString(
                                                                                                                    s)));
    }
};


#endif //CPPUTILS_STRINGBASECONVERTER_H
