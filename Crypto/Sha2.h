//
// Created by user on 04/01/16.
//

#ifndef CPPUTILS_SHA2_H
#define CPPUTILS_SHA2_H

#include <vector>

#include <openssl/sha.h>

namespace Sha2
{
std::vector<unsigned char> sha224(std::vector<unsigned char> in);
std::vector<unsigned char> sha256(std::vector<unsigned char> in);
std::vector<unsigned char> sha384(std::vector<unsigned char> in);
std::vector<unsigned char> sha512(std::vector<unsigned char> in);
};


#endif //CPPUTILS_SHA2_H
