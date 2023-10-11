#include <stdio.h>
#include <string.h>

struct Movel {
    char descricao[50];
    float peso;
    char tipo;
};

int main(void) {
    int x;
    scanf("%d", &x);

    struct Movel moveis[x];

    for (int i = 0; i < x; i++) {
        getchar(); // Limpar o buffer do teclado antes de ler a descrição
        fgets(moveis[i].descricao, 50, stdin);
        moveis[i].descricao[strcspn(moveis[i].descricao, "\n")] = '\0';
        scanf("%f", &moveis[i].peso);
        getchar(); // Limpar o buffer
        scanf("%c", &moveis[i].tipo);
    }

    int acima10Kg = 0;
    int descricaoReal = 0;
    float maiorPeso = 0;
    char descricaoMaisPesado[50];

    for (int i = 0; i < x; i++) {
        if (moveis[i].peso > 10 && moveis[i].tipo == 's') {
            acima10Kg++;
        }

        // Verificar a ocorrência de "Real" em toda a descrição
        char *descricaoPtr = moveis[i].descricao;
        while ((descricaoPtr = strstr(descricaoPtr, "Real")) != NULL) {
            if (descricaoPtr == moveis[i].descricao || descricaoPtr[-1] == ' ') {
                if (descricaoPtr[4] == '\0' || descricaoPtr[4] == ' ') {
                    descricaoReal++;
                }
            }
            descricaoPtr++;
        }

        if (moveis[i].peso > maiorPeso) {
            maiorPeso = moveis[i].peso;
            strcpy(descricaoMaisPesado, moveis[i].descricao);
        }
    }

    printf("Tipo 's' acima de 10Kg: %d\n", acima10Kg);
    printf("Termina em  \"Real\": %d\n", descricaoReal);
    printf("Mais pesado: \"%s\"\n", descricaoMaisPesado);

    return 0;
}

