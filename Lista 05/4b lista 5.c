#include <stdio.h>

int main() {
    int passos[7];
    int i, total = 0;

    printf("Insira os passos dados em cada dia da semana:\n");

    for (i = 0; i < 7; i++) {
        printf("Dia %d: ", i + 1);
        scanf("%d", &passos[i]);
        total += passos[i];
    }

    printf("Passos dados na semana: %d\n", total);

    return 0;
}