#include <stdio.h>

int main (){

    float valorcompra;
    float valordesconto;


    printf("Qual o valor da compra?? ");
    scanf("%f", &valorcompra);
    
    valordesconto = valorcompra * 0.85;

    printf("O valor com o desconto aplicado de 15%% eh %.2f ", valordesconto);






return 0;
}