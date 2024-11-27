#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int v[10];
    int i;
    int soma = 0, produto = 1;

    srand(time(NULL));


    for (i = 0; i < 10; i++) {
        v[i] = rand() % 81 + 10; 
        printf("%d ", v[i]);

        soma += v[i];
        produto *= v[i];
    }
    printf("\n");

    printf("soma dos valores do vetor: %d\n", soma);
    printf("produto acumulado: %d\n", produto);

    return 0;
}