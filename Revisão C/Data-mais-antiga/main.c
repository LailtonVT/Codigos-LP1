#include <stdio.h>
#include <string.h>

struct Data{
    int dia;
    int mes;
    int ano;
};

int PMaisVelha(struct Data d1, struct Data d2){
    if (d1.ano < d2.ano) {
        return 1;
    } else if (d1.ano > d2.ano) {
        return -1;
    } else {

        if (d1.mes < d2.mes) {
            return 1;
        } else if (d1.mes > d2.mes) {
            return -1;
        } else {

            if (d1.dia < d2.dia) {
                return 1;
            } else if (d1.dia > d2.dia) {
                return -1;
            } else {
                return 0;
            }
        }
    }
}


int main(){
    int resultado;
    struct Data pessoa1, pessoa2;

    scanf("%d %d %d", &pessoa1.dia, &pessoa1.mes, &pessoa1.ano);
    scanf("%d %d %d", &pessoa2.dia, &pessoa2.mes, &pessoa2.ano);

    resultado = PMaisVelha(pessoa1, pessoa2);

    if (resultado == 1){
        printf("Pessoa 1 é mais velha\n");
    }else if (resultado == -1){
        printf("Pessoa 2 é mais velha\n");
    }else if (resultado == 0){
        printf("Pessoas são da mesma idade\n");
    }

    return 0;
}
