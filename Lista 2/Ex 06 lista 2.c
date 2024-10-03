#include <stdio.h>

int main () {

    int Celular, cTotal , tablet , tTotal, total;

    printf("Celular custa: R$ 1000,00 \n");
    printf("Tablet custa: R$ 1500,00 \n");

    printf("Quantos celulares foram vendidos? ");
    scanf("%d", &Celular);

    printf("Quantos tablets foram vendidos? ");
    scanf("%d", &tablet);

    cTotal = Celular * 1000;
    tTotal = tablet * 1500;
    total = cTotal + tTotal;

    printf("Voce vendeu R$ %d em celulares e tablets \n", total);

    return 0;
}