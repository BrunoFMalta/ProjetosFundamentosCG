#include <stdio.h>

int main() {
    int passos[7];
    int i;

    printf("Insira os passos dados em cada dia da semana:\n");

    for (i = 0; i < 7; i++) {
        printf("Dia %d: ", i + 1);
        scanf("%d", &passos[i]);
    }

    printf("dias com 10,000 ou mais passos:\n");
    for (i = 0; i < 7; i++) {
        if (passos[i] >= 10000) {
            printf("Dia %d\n", i + 1);
        }
    }

    return 0;
}