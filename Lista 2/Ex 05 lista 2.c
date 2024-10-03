#include <stdio.h>

int main () {

    float preco = 6.19, valor, total;

    printf("A gasolina hoje esta R$ 6,19");
    printf("\n");

    printf("quanto voc quer colocar de gasolina? R$ ");
    scanf("%f", &valor);

    total = valor / preco;

    printf("%.2f de gasolina!", total);

    return 0;
}