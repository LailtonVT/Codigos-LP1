#include "Pessoa.h"
#include "Endereco.h"
#include <string>
#include <iostream>
#include <vector>

int main() {
    int numPessoas;
   
    std::cin >> numPessoas;
    
    std::cin.ignore();

    std::vector<Pessoa> agenda;

    for (int i = 0; i < numPessoas; i++) {
        std::string nome, telefone;
        std::string rua, bairro, cidade, estado, cep;
        int numero;
        
        getline(std::cin, nome);

       
        getline(std::cin, telefone);

        
        getline(std::cin, rua);

        
        std::cin >> numero;

        std::cin.ignore(); // Limpa o buffer do teclado

        
        getline(std::cin, bairro);

        
        getline(std::cin, cidade);

       
        getline(std::cin, estado);

        
        getline(std::cin, cep);

        Endereco endereco(rua, numero, bairro, cidade, estado, cep);
        Pessoa pessoa(nome, endereco, telefone);

        agenda.push_back(pessoa);
    }

    
    for ( auto& pessoa : agenda) {
        std::cout << pessoa.toString() << "\n\n";
    }

    return 0;
}