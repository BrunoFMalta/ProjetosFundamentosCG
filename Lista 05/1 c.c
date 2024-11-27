#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int v[10];
    int i;
    int count = 0;

    srand(time(NULL));

    for (i = 0; i < 10; i++) {
        v[i] = rand() % 81 + 10; 
        printf("%d ", v[i]);
    }
    printf("\n");

    for (i = 0; i < 10; i++) {
        if (v[i] == 50) {
            count++;
        }
    }

    printf("O numero 50 apareceu %d vezes no vetor.\n", count);

    return 0;
}