#ifndef PAGAMENTO_H
#define PAGAMENTO_H
#include <string>

class Pagamento
{
    public:
        Pagamento();
        Pagamento(float valorPagamento, std::string nomeDoFuncionario);

        float getValorPagamento();
        std::string getNomeDoFuncionario();

        void setValorPagamento(float valorPagamento);
        void setNomeDoFuncionario(std::string nomeDoFuncionario);


    protected:

    private:
        float valorPagamento;
        std::string nomeDoFuncionario;
};

#endif // PAGAMENTO_H
