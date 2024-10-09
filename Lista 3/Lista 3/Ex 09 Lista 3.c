#include  <stdio.h>

int main () {

    int escolha;
    float resultado, valor, exEuro, exDolar;

    printf("\tValor hoje 28/09:\n");
    printf("Valor do Euro para o real: $6.07 e o valor do Dolar para o Real: $5.43\n");
    printf("1) Real para Euro:\n");
    printf("2) Real para Dolar:\n");
    printf("3) Euro para Dolar:\n");
    printf("4) Euro para Real:\n");
    printf("5) Dolar para Euro:\n");
    printf("6) Dolar para Real:\n");
    printf("Qual sua escolha?\n");

    if (escolha == 1) {
        printf("Digite o valor em Real: ");
        scanf("%f", &valor);
        resultado = valor / exEuro;
        printf("%.2f Reais es %.2f Euro.\n", valor, resultado);

    } else if (escolha == 2) {
        printf("Digite o valor em Real: ");
        scanf("%f", &valor);
        resultado = valor / exDolar;
        printf("%.2f Reais es %.2f Dolar.\n", valor, resultado);

    } else if (escolha == 3) {
        printf("Digite o valor em Euro: ");
        scanf("%f", &valor);
        resultado = valor * exEuro / exDolar;
        printf("%.2f Euro es %.2f Dolar.\n", valor, resultado);

    } else if (escolha == 4) {
        printf("Digite o valor em Euro: ");
        scanf("%f", &valor);
        resultado = valor * exEuro;
        printf("%.2f Euro es %.2f Real.\n", valor, resultado);

    } else if (escolha == 5) {
        printf("Digite o valor em Dolar: ");
        scanf("%f", &valor);
        resultado = valor * exDolar / exEuro;
        printf("%.2f Dolar es %.2f Euro.\n", valor, resultado);

    } else if (escolha == 6) {
        printf("Digite o valor em Dolar: ");
        scanf("%f", &valor);
        resultado = valor * exDolar;
        printf("%.2f Dolar es %.2f Real.\n", valor, resultado);

    } else if (escolha > 6)
    {
        printf("Opcao invalida.\n");
    }
    

    return 0;
}