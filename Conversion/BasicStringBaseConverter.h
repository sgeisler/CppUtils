//
// Created by sebastian on 21.12.15.
//

#ifndef CPPUTILS_BASICSTRINGBASECONVERTER_H
#define CPPUTILS_BASICSTRINGBASECONVERTER_H


#include "StringBaseConverter.h"
#include "BasicStringConverter.h"

template<size_t fromBase, size_t toBase>
class BasicStringBaseConverter: public StringBaseConverter<fromBase, toBase>
{
public:
    BasicStringBaseConverter(std::string alph)
        : StringBaseConverter<fromBase, toBase>((StringConverter<unsigned char> *) new BasicStringConverter(alph))
    { };
    BasicStringBaseConverter(std::string alph1, std::string alph2)
        : StringBaseConverter<fromBase, toBase>((StringConverter<unsigned char> *) new BasicStringConverter(alph1),
                                                (StringConverter<unsigned char> *) new BasicStringConverter(alph2))
    { };
};


#endif //CPPUTILS_BASICSTRINGBASECONVERTER_H
