#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int v[10];
    int i;

    srand(time(NULL));

    for (i = 0; i < 10; i++) {
        v[i] = rand() % 81 + 10; 
        printf("%d ", v[i]);
    }
    printf("\n");

    printf("vetor inverso: ");
    for (i = 9; i >= 0; i--) {
        printf("%d ", v[i]);
    }
    printf("\n");

    return 0;
}