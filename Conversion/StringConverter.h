//
// Created by sebastian on 20.12.15.
//

#ifndef CPPUTILS_STRINGCONVERTER_H
#define CPPUTILS_STRINGCONVERTER_H

#include <string>
#include <vector>

using std::vector;
using std::string;

template<class arrayType, class stringType = string>
class StringConverter
{
public:
    virtual vector<arrayType> fromString(stringType s) = 0;
    virtual stringType toString(vector<arrayType> s) = 0;
};


#endif //CPPUTILS_STRINGCONVERTER_H
