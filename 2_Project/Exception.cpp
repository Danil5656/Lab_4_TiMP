#include "Exception.h"
int Error::Check_k (wstring str, string sKey) 
{
    if (sKey.length()==0)
        throw Error(string("вы ввели пустой ключ."));
    if (sKey.find_first_not_of("-0123456789",0)!=string::npos) {
        throw Error(string("вы ввели недопустимый ключ."));
    }
    size_t chislo_key = stoi(sKey);
    if (chislo_key <= 0 || chislo_key > str.length()-1) {
        throw Error(string("недопустимый ключ."));
    } 
    return 7;
}
int Error::Check_s (string str)
{
    if (str.length()==0)
        throw Error(string("вы ввели пустую строку."));
        return 7;
}
