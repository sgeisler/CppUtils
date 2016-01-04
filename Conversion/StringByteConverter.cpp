//
// Created by user on 04/01/16.
//

#include "StringByteConverter.h"

std::vector<unsigned char> StringByteConverter::toBytes(std::string inp)
{
    return std::vector<unsigned char>(inp.begin(), inp.end());
}

std::string StringByteConverter::toString(std::vector<unsigned char> inp)
{
    return std::string((char*)(&inp[0]), inp.size());
}