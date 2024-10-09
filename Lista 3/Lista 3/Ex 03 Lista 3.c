#include <stdio.h>

int main () {

    int n, resultado;

    printf("Digite um numero: ");
    scanf("%d", &n);

    if (n > 0) {

        resultado = n * 2;
        printf("O resultado eh: %d", resultado);

    } else {

        resultado = n * 3;
        printf("O resultado eh: %d", resultado);
        
    }

    return 0;
}