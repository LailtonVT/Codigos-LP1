#include <string>
#include "Funcionario.h"

Funcionario::Funcionario()
{

}

Funcionario::Funcionario(std::string primeiroNome, std::string sobrenome, float salarioMensal)
{
    this->primeiroNome = primeiroNome;
    this->sobrenome = sobrenome;
    this->salarioMensal = salarioMensal;
}

std::string Funcionario::getPrimeiroNome()
{
    return primeiroNome;
}
std::string Funcionario::getSobrenome()
{
    return sobrenome;
}
float Funcionario::getSalarioMensal()
{
    if(salarioMensal == -1){
        return 0.0;
    }else{
    return salarioMensal;
    }
}
void Funcionario::setPrimeiroNome(std::string primeiroNome)
{
    this->primeiroNome = primeiroNome;
}
void Funcionario::setSobrenome(std::string sobrenome)
{
    this->sobrenome = sobrenome;
}
void Funcionario::setSalarioMensal(float salarioMensal)
{
    if (salarioMensal < 0) {
        this->salarioMensal = 0;
    }else{
        this->salarioMensal = salarioMensal;
    }
    if (salarioMensal == -1){
        this->salarioMensal = 0;
    }
}

float Funcionario::getSalarioAnual()
{
    if (salarioMensal < 0){
        return 0;
    }else{
        return salarioMensal * 12;
    }
}

void Funcionario::aumentaSalario(float percent)
{
    if (salarioMensal < 0){
        return ;
    }else{
        salarioMensal *= (1 + percent);
    }

}
