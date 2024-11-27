#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int pontos[4] = {0};
    int i, j, round;
    int maior = 0, vencedor = -1;

    srand(time(NULL));

    for (i = 1; i <= 5; i++) {
        printf("\nRound %d:\n", i);
        for (j = 0; j < 4; j++) {
            round = rand() % 101;
            pontos[j] += round;
            printf("Jogador %d marcou: %d pontos\n", j + 1, round);

            if (round > 80) {
                printf("Rodada de destaque!: Jogador %d\n", j + 1);
            }
        }
    }

    printf("\nPontos finais!:\n");
    for (i = 0; i < 4; i++) {
        printf("Jogador %d: %d pontos\n", i + 1, pontos[i]);

        if (pontos[i] > maior) {
            maior = pontos[i];
            vencedor = i;
        }
    }

    printf("\n");
    if (vencedor != -1) {
        printf("vencedor: Jogador %d\n", vencedor + 1);
    } else {
        printf("Empate!\n");
    }

    return 0;
}