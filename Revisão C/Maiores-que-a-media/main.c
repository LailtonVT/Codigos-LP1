#include <stdio.h>

int main(){
    int x = 10;
    int numero[10];
    int contador = 0;
    float mediaArit;
    int maioresQueMedia[10];
    int soma = 0;

    for (int i = 0; i < x; i++){
        scanf("%d", &numero[i]);
        contador++;
        soma += numero[i];
    }

    mediaArit = soma / (float)contador;

    printf("Media: %.1f\n", mediaArit);
    printf("Maiores que a media: ");

    for (int i = 0; i < 10; i++){
        if (numero[i] > mediaArit){
            printf("%d ", numero[i]);
        }
    }

    return 0;
}
