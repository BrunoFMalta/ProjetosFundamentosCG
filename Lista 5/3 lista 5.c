#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int N, i, j;
    int resultado[6] = {0};

    printf("Digite o numero de lancamentos (N): ");
    scanf("%d", &N);

    srand(time(NULL));

    for (i = 0; i < N; i++) {
        int roll = rand() % 6 + 1; 
        resultado[roll - 1]++;
    }

    printf("Resultado:\n");
    for (i = 0; i < 6; i++) {
        double porcentagem = (double)resultado[i] / N * 100;
        printf("Lado %d: %.2f%%\n", i + 1, porcentagem);
    }

    return 0;
}