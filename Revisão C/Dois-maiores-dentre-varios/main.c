#include <stdio.h>

int main(){
    int numero;
    int maior1 = -500000;
    int maior2 = -500000;


    do{
        scanf("%d", &numero);

        if (numero != 0){
            if (numero > maior1){
                maior2 = maior1;
                maior1 = numero;
            }else if(numero > maior2){
                maior2 = numero;
            }
        }

    }while(numero != 0);

    printf("Maior: %d\n", maior1);
    printf("Segundo maior: %d\n", maior2);

    return 0;
}
