//
// Created by user on 04/01/16.
//

#ifndef CPPUTILS_STRINGTOBYTECONVERTER_H
#define CPPUTILS_STRINGTOBYTECONVERTER_H

#include <string>
#include <vector>

namespace StringByteConverter
{
std::vector<unsigned char> toBytes(std::string inp);
std::string toString(std::vector<unsigned char> inp);
};


#endif //CPPUTILS_STRINGTOBYTECONVERTER_H
