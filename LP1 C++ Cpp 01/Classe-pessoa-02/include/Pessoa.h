#ifndef PESSOA_H
#define PESSOA_H
#include <string>


class Pessoa
{
    public:
        Pessoa() : idade(0){} // definição do construtor padrão e inicialização do atributo idade em 0;
        Pessoa(std::string nome); // definição do segundo construtor com que recebe uma string nome
        Pessoa(std::string nome, int idade, std::string telefone); // definição do terceiro construtor que recebe 3 parametros

        std::string getNome();
        int getIdade();
        std::string getTelefone();

        void setNome(std::string novoNome);
        void setIdade(int novaIdade);
        void setTelefone(std::string novoTelefone);

    protected:

    private:
        std::string nome;
        int idade;
        std::string telefone;
};

#endif // PESSOA_H
