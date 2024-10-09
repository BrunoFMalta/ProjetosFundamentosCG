#include <stdio.h>


int main () {

    int cont = 0;
    int num; 
    int soma = 0;
    float media;

    while (cont < 15) {

    printf("Digite o numero: ");
    scanf("%d", &num);

    soma = soma + num;

    cont++;
    }

    printf("A soma dos valores eh: %d\n", soma);


    media = soma / 5;

    printf("A media eh: %.2f\n", media);

    return 0;
}