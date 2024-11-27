#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int v[10];
    int i;
    int sum = 0;
    double med;

    srand(time(NULL));

    for (i = 0; i < 10; i++) {
        v[i] = rand() % 81 + 10; 
        printf("%d ", v[i]);
        sum += v[i];
    }
    printf("\n");

    med = (double)sum / 10;

    printf("A media do vetor eh: %.2f\n", med);

    return 0;
}