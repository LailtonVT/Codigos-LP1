#ifndef INVOICE_H
#define INVOICE_H
#include <string>


class Invoice
{
    public:
        Invoice(int numero, std::string descricao, int quantidade, float preco);

        int getNumero();
        std::string getDescricao();
        int getQuantidade();
        float getPreco();

        void setNumero(int numero);
        void setDescricao(std::string descricao);
        void setQuantidade(int quantidade);
        void setPreco(float preco);

        float getInvoiceAmount();

        void print();

    protected:

    private:
        int numero;
        std::string descricao;
        int quantidade;
        float preco;
};

#endif // INVOICE_H
