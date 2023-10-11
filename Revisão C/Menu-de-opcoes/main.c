#include <stdio.h>

void ApresentaMenu() {
    printf("1 - Item 1\n");
    printf("2 - Item 2\n");
    printf("3 - Item 3\n");
    printf("4 - Sair\n");
}

int main() {
    int x;

    ApresentaMenu();

    do {
        scanf("%d", &x);

        switch (x) {
            case 1:
                printf("Item 1\n");
                ApresentaMenu();
                break;
            case 2:
                printf("Item 2\n");
                ApresentaMenu();
                break;
            case 3:
                printf("Item 3\n");
                ApresentaMenu();
                break;
            case 4:
                printf("Sair\n");
                break;
            default:
                printf("Opcao %d Invalida\n", x);
                ApresentaMenu();
                break;
        }

    } while (x != 4);

    return 0;
}
