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

    printf("Informe três números separados por espaço: ");
    scanf("%d %d %d", &x, &y, &z);

    maior = Maximo(x, y, z);

    printf("O maior número é: %d\n", maior);

    return 0;
}

