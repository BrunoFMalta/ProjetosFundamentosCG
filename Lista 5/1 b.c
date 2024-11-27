#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int v[10];
    int i;
    int found = 0;

    srand(time(NULL));

    for (i = 0; i < 10; i++) {
        v[i] = rand() % 81 + 10; 
    }
    printf("\n");

    for (i = 0; i < 10; i++) {
        if (v[i] == 50) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("O valor 50 foi achado nesse vetor.\n");
    } else {
        printf("O valor 50 nao foi achado nesse vetor.\n");
    }

    return 0;
}