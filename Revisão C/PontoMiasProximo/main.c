#include <stdio.h>
#include <math.h>

// Definição da estrutura Ponto
struct Ponto {
    int x;
    int y;
};

// Função para calcular a distância entre dois pontos
int calcularDistancia(struct Ponto p1, struct Ponto p2) {
    return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}

int main() {
    int n;
    struct Ponto p;
    int maisProximo = 0;
    int menorDistancia;

    scanf("%d %d", &p.x, &p.y);
    getchar();

    scanf("%d", &n);

    struct Ponto pontos[n];
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &pontos[i].x, &pontos[i].y);
    }

    menorDistancia = calcularDistancia(p, pontos[0]);

    for (int i = 1; i < n; i++) {
        int distancia = calcularDistancia(p, pontos[i]);
        if (distancia < menorDistancia) {
            menorDistancia = distancia;
            maisProximo = i;
        }
    }

    printf("Ponto mais perto é (%d, %d)\n", pontos[maisProximo].x, pontos[maisProximo].y);

    return 0;
}

