#include <stdio.h>

int main () {

    float salario, desconto;

    printf("Qual seu salario? ");
    scanf("%f", &salario);
    desconto = salario * 0.11;

    if (desconto > 318.20){
        desconto = 318.20;
    }
    
    printf("O valor do desconto es: %.2f\n", desconto);

    return 0;
}