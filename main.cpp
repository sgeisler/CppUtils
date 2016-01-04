#include <iostream>
#include "Crypto/Sha2.h"
#include "Conversion/StringByteConverter.h"
#include "Conversion/BaseConversion.h"
#include "Conversion/BasicStringConverter.h"

using namespace std;

int main()
{
    auto hash = Sha2::sha512(StringByteConverter::toBytes("test"));
    auto hex = BaseConversion<unsigned char, unsigned char, 256, 16, uint64_t >::convert(hash);
    auto base85 = BaseConversion<unsigned char, unsigned char, 256, 85, uint64_t>::convert(hash);

    std::cout << BasicStringConverter("0123456789ABCDEF").toString(hex) << std::endl;

    for(auto it = base85.begin(); it != base85.end(); ++it)
    {
        std::cout << (int)*it << " ";
    }

    std::cout << std::endl;

    return 0;
}