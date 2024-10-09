#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

    int num, escolha, random, soma;

    printf("Voce quer 1-PAR ou 2-IMPAR?");
    scanf("%d", &escolha);
    
    printf("Digite um numero de 1 a 5: ");
    scanf("%d", &num);
    
    random = rand() % 6;

    soma = num + random;

    if((escolha == 1 && soma % 2 == 0) || (escolha == 2 && soma % 2 != 0)) {

        printf("Voce ganhouuu!");

    } else {

        printf("Voce perdeu :(");
    }

    return 0;
}