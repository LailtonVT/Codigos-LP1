#include <iostream>
#include "Funcionario.h"


int main()
{
   int N;
    std::cin >> N;

    Funcionario funcionario[N];

    for (int i = 0; i < N; i++){
        std::string primeiroNome, sobrenome;
        float salario;

        std::cin.ignore();
        std::getline(std::cin, primeiroNome);
        std::getline(std::cin, sobrenome);
        std::cin >> salario;

        funcionario[i] = Funcionario(primeiroNome, sobrenome, salario);
    }
    for (int i = 0; i < N; ++i){
        std::cout << funcionario[i].getPrimeiroNome() << " " << funcionario[i].getSobrenome() << " - " << funcionario[i].getSalarioMensal();
        std::cout << " - " << funcionario[i].getSalarioAnual() << std::endl;

        funcionario[i].aumentaSalario(0.1);
        std::cout << funcionario[i].getSalarioAnual() << std::endl;
    }
    return 0;
}
