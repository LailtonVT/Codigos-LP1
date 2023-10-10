#include <stdio.h>
#include <string.h>


 typedef struct {
    char nomeCompleto[100];
    int idade;
    int chutes;
    int gols;
}Tjogador;

int main(){

    Tjogador jogador1, jogador2;

    fgets(jogador1.nomeCompleto, 100, stdin);
    jogador1.nomeCompleto[strcspn(jogador1.nomeCompleto, "\n")] = '\0';
    scanf("%d", &jogador1.idade);
    getchar();
    scanf("%d", &jogador1.chutes);
    getchar();
    scanf("%d", &jogador1.gols);
    getchar();

    fgets(jogador2.nomeCompleto, 100, stdin);
    jogador2.nomeCompleto[strcspn(jogador2.nomeCompleto, "\n")] = '\0';
    scanf("%d", &jogador2.idade);
    getchar();
    scanf("%d", &jogador2.chutes);
    getchar();
    scanf("%d", &jogador2.gols);
    getchar();

    if (jogador1.gols > jogador2.gols){
        printf("%s (%d)\n", jogador1.nomeCompleto, jogador1.idade);
    }else{
        printf("%s (%d)\n", jogador2.nomeCompleto, jogador2.idade);
    }



    return 0;
}
