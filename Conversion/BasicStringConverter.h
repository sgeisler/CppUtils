//
// Created by sebastian on 20.12.15.
//

#ifndef CPPUTILS_BASICSTRINGCONVERTER_H
#define CPPUTILS_BASICSTRINGCONVERTER_H

#include "StringConverter.h"

class BasicStringConverter: StringConverter<unsigned char>
{
    typedef unsigned char arrayType;
    typedef std::string stringType;

    const stringType alphabet;

public:
    BasicStringConverter(stringType alphabet);

    virtual vector<arrayType> fromString(stringType s);
    virtual stringType toString(vector<arrayType> s);
};


#endif //CPPUTILS_BASICSTRINGCONVERTER_H
