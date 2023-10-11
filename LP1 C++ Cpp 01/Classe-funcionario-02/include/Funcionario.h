#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <string>

class Funcionario
{
    public:
        Funcionario(std::string primeiroNome, std::string sobrenome, float salarioMensal);
        Funcionario();

        std::string getPrimeiroNome();
        std::string getSobrenome();
        float getSalarioMensal();

        void setPrimeiroNome(std::string primeiroNome);
        void setSobrenome(std::string sobrenome);
        void setSalarioMensal(float salarioMensal);

        float getSalarioAnual();

        void aumentaSalario(float percent);


    protected:

    private:
        std::string primeiroNome;
        std::string sobrenome;
        float salarioMensal;
};

#endif // FUNCIONARIO_H
