#include <stdio.h>

struct Ponto {
    int x;
    int y;
};

int calcularQuadradoDistancia(struct Ponto p1, struct Ponto p2) {
    int dx = p2.x - p1.x;
    int dy = p2.y - p1.y;
    return dx * dx + dy * dy;
}

int main() {
    struct Ponto ponto1, ponto2;

    printf("Informe as coordenadas do primeiro ponto (x y): ");
    scanf("%d %d", &ponto1.x, &ponto1.y);

    printf("Informe as coordenadas do segundo ponto (x y): ");
    scanf("%d %d", &ponto2.x, &ponto2.y);

    int distanciaQuadrado = calcularQuadradoDistancia(ponto1, ponto2);

    printf("O quadrado da distância entre os pontos é: %d\n", distanciaQuadrado);

    return 0;
}
