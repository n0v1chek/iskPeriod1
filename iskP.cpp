#include <iostream>
#include <string>
#include "iskP.h"


std::string iskPeriod(const std::string& stroka, int& K)
{
    if (stroka.size() % K != 0) {
        return "Ne kratno";
    }
    else {

        for (int i = 0; i < stroka.size(); ++i) {

            if (stroka[i] != stroka[i % K]) {
                return "Ne kratno";
            }
            
        }return "Kratno";
    }
    }