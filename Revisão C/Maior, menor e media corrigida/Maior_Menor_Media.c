#include <stdio.h>

int main() {
    int n;
    int numeros;
    int menorN;
    int maiorN;
    long long soma = 0;

    scanf("%d", &n);
    getchar();

    for (int i = 0; i < n; i++) {
        scanf("%d", &numeros);

        if (i == 0) {
            menorN = numeros;
            maiorN = numeros;
        } else {
            if (numeros < menorN) {
                menorN = numeros;
            }
            if (numeros > maiorN) {
                maiorN = numeros;
            }
        }
        soma += numeros;
    }

    int media = soma / n;

    printf("%d %d %d\n", menorN, maiorN, media);

    return 0;
}