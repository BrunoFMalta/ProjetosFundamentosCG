#include <stdio.h>

int main () {

     float dolar, real;

    printf("Hoje o dolar esta R$ 5,64 \n");

    printf("Quantos dolar voce quer comprar? ");
    scanf("%f", &real);

    dolar = real * 5.64;

    printf("Voce tera que pagar R$ %.2f \n", dolar);

    return 0;
}