#include "ControlePagamento.h"
#include <string>

ControleDePagamentos::ControleDePagamentos()
{
    numPagamentos = 0;
}

void ControleDePagamentos::setPagamento(Pagamento p, int index)
{
    if(index >= 0 && index < MAX_PAGAMENTOS){
        pagamentos[index] = p;
        numPagamentos++;
    }
}
Pagamento ControleDePagamentos::getPagamento(int pos)
{
    if(pos >= 0 && pos < numPagamentos){
        return pagamentos[pos];
    }
    return Pagamento();
}
float ControleDePagamentos::calculaTotalDePagamentos()
{
    float total = 0; //definir a variavel total que irá servir como somatorio de todos os pagamentos
    for (int i = 0; i < numPagamentos; i++){
        total += pagamentos[i].getValorPagamento(); //crio um laço for que ira percorrer todo o indice e somar o valor dos pagamentos
    }
    return total; //ao final o metodo retorna a variavel total com todos os valores somados
}
int ControleDePagamentos::getIndexFuncionario(std::string nomeFuncionario) {
    for (int i = 0; i < numPagamentos; ++i) {
        std::string nome = pagamentos[i].getNomeDoFuncionario();
        if (nome.find(nomeFuncionario, 0) != std::string::npos) {
            return i;
        }
    }
    return -1;
}
