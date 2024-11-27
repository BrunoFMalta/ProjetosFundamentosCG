#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int f[10], g[10];
    int i, j;

    srand(time(NULL));

    printf("Vetor f: ");
    for (i = 0; i < 10; i++) {
        f[i] = rand() % 81 + 10; 
        printf("%d ", f[i]);
    }
    printf("\n");

    j = 0;
    for (i = 9; i >= 0; i--) {
        g[j] = f[i];
        j++;
    }

    printf("Vetor g (reverso do f): ");
    for (i = 0; i < 10; i++) {
        printf("%d ", g[i]);
    }
    printf("\n");

    return 0;
}