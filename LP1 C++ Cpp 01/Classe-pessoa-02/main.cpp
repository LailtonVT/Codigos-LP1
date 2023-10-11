#include <iostream>
#include <string>
#include <vector>
#include "Pessoa.h"

int main()
{
    int N;

    std::cin >> N;
    std::cin.ignore();

    std::vector <Pessoa> pessoa(N);

    for (int i = 0; i < N; i++){
        std::string nome, telefone;
        int idade;

        std::getline(std::cin,nome);
        std:: cin >> idade;
        std::cin.ignore();
        std::getline(std::cin, telefone);

        pessoa[i] = Pessoa(nome, idade, telefone);

    }

    std::string nomePesquisa;

    std::cin >> nomePesquisa;
    std::getline(std::cin, nomePesquisa);

    bool encontrada = false;

    for (Pessoa &p : pessoa){
        if (p.getNome().find(nomePesquisa) != std::string::npos){
            std::cout << p.getNome() << ", " << p.getIdade() << ", " << p.getTelefone() << std::endl;
            encontrada = true;

        }
    }

    if (! encontrada){
        std::cout << "Pessoa não encontrada" << std::endl;
    }

    return 0;
}
