#include <stdio.h>

int Maximo(int a, int b, int c) {
    if (a > b && a > c) {
        return a;
    }
    if (b > a && b > c) {
        return b;
    } else {
        return c;
    }
}

int main() {
    int x, y, z, maior;

    printf("Informe tr�s n�meros separados por espa�o: ");
    scanf("%d %d %d", &x, &y, &z);

    maior = Maximo(x, y, z);

    printf("O maior n�mero �: %d\n", maior);

    return 0;
}

