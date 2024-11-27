#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int v[10], vPar[10], vImpar[10];
    int i, j, k, contPar = 0, contImpar = 0;

    srand(time(NULL));

    printf("Vetor v: ");
    for (i = 0; i < 10; i++) {
        v[i] = rand() % 81 + 10; 
        printf("%d ", v[i]);

        if (v[i] % 2 == 0) {
            vPar[contPar] = v[i];
            contPar++;
        } else {
            vImpar[contImpar] = v[i];
            contImpar++;
        }
    }
    printf("\n");

    printf("Vetor vPar: ");
    for (i = 0; i < contPar; i++) {
        printf("%d ", vPar[i]);
    }
    printf("\n");

    printf("Vetor vImpar: ");
    for (i = 0; i < contImpar; i++) {
        printf("%d ", vImpar[i]);
    }
    printf("\n");

    return 0;
}