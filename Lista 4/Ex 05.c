#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int valores[5];
    int i, menor, maior;
    float soma = 0;

    srand(time(NULL));


    for (i = 0; i < 5; i++) {
        valores[i] = rand() % 101; 

        printf("Valor sorteado %d: %d\n", i + 1, valores[i]);

        soma += valores[i];

        if (i == 0) {
            menor = maior = valores[i];
        } else {
            if (valores[i] < menor) {
                menor = valores[i];
            }
            if (valores[i] > maior) {
                maior = valores[i];
            }
        }
    }

    
    float media = soma / 5;

    printf("Menor valor: %d\n", menor);
    printf("Maior valor: %d\n", maior);
    printf("Média dos valores: %.2f\n", media);

    return 0;
}
