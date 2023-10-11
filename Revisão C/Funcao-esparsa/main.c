#include <stdio.h>

int isEsparsa(int mat[10][10], int larg, int alt) {
    int totalEl = larg * alt;
    int totalZeros = 0;
    for (int L = 0; L < alt; L++) {
        for (int C = 0; C < larg; C++) {
            if (mat[L][C] == 0)
                totalZeros++;
        }
    }

    if ((totalZeros / (float)totalEl) > 0.7)
        return 1; // true
    else
        return 0; // false
}

int main() {
    int mat[10][10];
    int larg, alt;

    scanf("%d", &larg);
    scanf("%d", &alt);

    for (int L = 0; L < alt; L++) {
        for (int C = 0; C < larg; C++) {
            scanf("%d", &mat[L][C]);
        }
    }

    if (isEsparsa(mat, larg, alt))
        printf("A matriz é esparsa\n");
    else
        printf("A matriz não é esparsa\n");

    return 0;
}
