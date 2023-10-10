#include <stdio.h>


void somarMatrizes(int matrizA[][3], int matrizB[][3], int resultado[][3], int m, int n) {

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            resultado[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }
}

int main() {
    int m, n;


    scanf("%d %d", &m, &n);

    int matrizA[m][3];
    int matrizB[m][3];
    int resultado[m][3];


    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrizA[i][j]);
        }
    }


    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrizB[i][j]);
        }
    }


    somarMatrizes(matrizA, matrizB, resultado, m, n);


    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}
