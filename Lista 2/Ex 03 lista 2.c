#include <stdio.h>

int main () {

     float kilo, prato;

    printf("Seu prato pesa: kg ");
    scanf("%f", &prato);

    kilo = prato * 40;

    printf("Voce tens que pagar R$ %.2f  \n", kilo);

    return 0;
}