#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;

    cin >> n;

    vector<int> vetorA(n);

    //agora vou criar um laço for para completar o vetor com números maiores que zero
    for (int i = 0; i < n; i++){
            do{
                cin >> vetorA[i];;
        }while (vetorA[i] <= 0);
    }

    //agora vou criar um laço for para remover os numeros repetidos
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (vetorA[i] == vetorA[j]){
                vetorA[j] = 0;
            }
        }
    }

    // agora vou criar um laço para imprimir os vetores sem incluir os zeros
    for (int i = 0; i < n; i++){
        if (vetorA[i] != 0){
            cout << vetorA[i] << " ";
        }
    }

    cout << endl;

        return 0;
}
