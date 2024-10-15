#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero, palpite, tentativas = 3;

 
    srand(time(NULL));
    numero = rand() % 10 + 1;

    printf("Tente adivinhar o número secreto (de 1 a 10). Você tem 3 tentativas.\n");

    for (int i = 0; i < tentativas; i++) {
        printf("Digite seu palpite: ");
        scanf("%d", &palpite);

        if (palpite == numero) {
            printf("Parabéns! Você acertou o número secreto.\n");
            return 0; 
        } else if (palpite < numero) {
            printf("O número secreto é maior que %d.\n", palpite);
        } else {
            printf("O número secreto é menor que %d.\n", palpite);
        }
    }

    printf("Suas tentativas acabaram. O número secreto era %d.\n", numero);
    return 0;
}
