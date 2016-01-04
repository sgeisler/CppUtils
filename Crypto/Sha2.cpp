//
// Created by user on 04/01/16.
//

#include "Sha2.h"

//TODO: implement secure allocators

/**
 * DO NOT USE FOR CRITICAL DATA
 * THERE ARE NO SECURE ALLOCATORS IMPLEMENTED YET
 */

std::vector<unsigned char> Sha2::sha224(std::vector<unsigned char> in)
{
    std::vector<unsigned char> ret(224 / 8);
    SHA224(&in[0], in.size(), &ret[0]);

    return ret;
}
std::vector<unsigned char> Sha2::sha256(std::vector<unsigned char> in)
{
    std::vector<unsigned char> ret(256 / 8);
    SHA256(&in[0], in.size(), &ret[0]);

    return ret;
}
std::vector<unsigned char> Sha2::sha384(std::vector<unsigned char> in)
{
    std::vector<unsigned char> ret(384 / 8);
    SHA384(&in[0], in.size(), &ret[0]);

    return ret;
}
std::vector<unsigned char> Sha2::sha512(std::vector<unsigned char> in)
{
    std::vector<unsigned char> ret(512 / 8);
    SHA512(&in[0], in.size(), &ret[0]);

    return ret;
}