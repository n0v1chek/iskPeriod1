#include <iostream>
#include <string>
#include "iskP.h"

int main()
{
    setlocale(0, "");
    std::string stroka ("0");
    int K (0);
    std::cout << "�������� ���� ������" << std::endl;
    std::cin >> stroka;
    std::cout << "������� �����" << std::endl;

    std::cin >> K;
    if (K <= 0) {
        std::cout << "������� ������������� �����" << std::endl; 
    }
    else {      
      std::cout << iskPeriod(stroka, K);
         }
   
    return 0;
}



