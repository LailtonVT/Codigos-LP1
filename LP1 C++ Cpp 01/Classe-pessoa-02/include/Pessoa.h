#ifndef PESSOA_H
#define PESSOA_H
#include <string>


class Pessoa
{
    public:
        Pessoa() : idade(0){} // defini��o do construtor padr�o e inicializa��o do atributo idade em 0;
        Pessoa(std::string nome); // defini��o do segundo construtor com que recebe uma string nome
        Pessoa(std::string nome, int idade, std::string telefone); // defini��o do terceiro construtor que recebe 3 parametros

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
