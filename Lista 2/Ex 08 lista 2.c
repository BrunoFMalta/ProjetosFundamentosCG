#include <stdio.h>

int main (){

    int graus;
    float fahren;

    printf("Quantos graus Celsius voce quer converter para Fahrenheit? ");
    scanf("%d", &graus);

    fahren = (graus * 9 / 5) + 32;

    printf("Em Fahrenheit voce tens %.2f ", fahren);
    
return 0;
}