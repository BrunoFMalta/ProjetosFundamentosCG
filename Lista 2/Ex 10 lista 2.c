#include <stdio.h>

int main (){

    int camisetas;
    int calcas;
    int cintos;
    float dCamisetas, dCalcas, dCintos;
    float total;
    float totaldesconto;

printf("Quantas camisetas o cliente comprou? ");
scanf("%d", &camisetas);
printf("Quantas calcas o cliente comprou? ");
scanf("%d", &calcas);
printf("Quantos cintos o cliente comprou? ");
scanf("%d", &cintos);


dCamisetas = camisetas * 25;
dCalcas = calcas * 100;
dCintos = cintos * 40;

total = dCamisetas + dCalcas + dCintos;
totaldesconto = total * 0.10;


printf("O valor total da compra ficou R$ %.2f\n", total);
printf("O valor da compra com 10%% de desconto ficou R$ %.2f\n", totaldesconto);











return 0;
}