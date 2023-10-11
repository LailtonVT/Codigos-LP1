#include <stdio.h>

int main() {
    int x;
    int maioresQ15 = 0;
    int totalNumeros = 0;
    int porcentagem = 0;

    do {
        printf("Insira um numero (0 para encerrar): ");
        scanf("%d", &x);

        if (x != 0) {
            totalNumeros++;
            if (x % 2 != 0 && x > 15) {
                maioresQ15++;
            }
        }
    } while (x != 0);

    if (totalNumeros > 0) {
        porcentagem = (maioresQ15 * 100) / totalNumeros;
    }

    printf("Porcentagem de numeros impares maiores que 15: %d%%\n", porcentagem);

    return 0;
}

