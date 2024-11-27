#include <stdio.h>

int main() {
    int passos[7];
    int i, totalpassos = 0;
    double mediapassos;

    printf("Insira os passos dados em cada dia da semana:\n");

    for (i = 0; i < 7; i++) {
        printf("Dia %d: ", i + 1);
        scanf("%d", &passos[i]);

        totalpassos += passos[i];
    }

    mediapassos = (double)totalpassos / 7;

    printf("media de passos por dia: %.2f\n", mediapassos);

    return 0;
}