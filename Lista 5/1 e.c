#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int v[10];
    int i;
    int maior, menor;

    srand(time(NULL));

    maior = menor = rand() % 81 + 10; 
    for (i = 0; i < 10; i++) {
        v[i] = rand() % 81 + 10; 
        printf("%d ", v[i]);

        if (v[i] > maior) {
            maior = v[i];
        }
        if (v[i] < menor) {
            menor = v[i];
        }
    }
    printf("\n");

    printf("maior valor: %d\n", maior);
    printf("menor valor: %d\n", menor);

    return 0;
}