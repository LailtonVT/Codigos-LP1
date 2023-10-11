#include <iostream>
#include <string>
#include "Invoice.h"



int main() {
    int num1, quant1;
    float preco1;
    std::string desc1;

    std::cin >> num1;
    std::cin.ignore(); // Ignorar o newline pendente
    std::getline(std::cin, desc1);
    std::cin >> quant1 >> preco1;

    int num2, quant2;
    float preco2;
    std::string desc2;

    std::cin >> num2;
    std::cin.ignore(); // Ignorar o newline pendente
    std::getline(std::cin, desc2);
    std::cin >> quant2 >> preco2;

   Invoice invoice1(num1, desc1, quant1, preco1);
   Invoice invoice2(num2, desc2, quant2, preco2);

    invoice1.print();

    invoice2.print();

    return 0;

}

