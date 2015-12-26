#include <iostream>
#include "Conversion/BasicStringBaseConverter.h"

using namespace std;

int main()
{
    BasicStringBaseConverter<10, 64>
        conv("0123456789abcdef", "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/");
    cout << conv.convert("da3ebc5a339c2cdf74584108767c68752e5700513d1c60") << endl;

    return 0;
}