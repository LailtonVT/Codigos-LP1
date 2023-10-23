#ifndef CONTROLEDEPAGAMENTOS_H
#define CONTROLEDEPAGAMENTOS_H
#include <algorithm>
#include <cctype>
#include "Pagamento.h"


class ControleDePagamentos
{
    public:
        ControleDePagamentos();
        void setPagamento(Pagamento p, int index);
        Pagamento getPagamento(int pos);
        float calculaTotalDePagamentos();
        int getIndexFuncionario(std::string nomeFuncionario);

    protected:

    private:
        const static int MAX_PAGAMENTOS = 100;
        Pagamento pagamentos[MAX_PAGAMENTOS];
        int numPagamentos;
};

#endif // CONTROLEDEPAGAMENTOS_H
