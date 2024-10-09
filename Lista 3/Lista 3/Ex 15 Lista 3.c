#include <stdio.h>

int main() {
    float valor, desconto, total;
    int pagamento;

    printf("Digite o valor do produto: R$ ");
    scanf("%f", &valor);

    printf("Escolha o metodo de pagamento:\n");
    printf("1 - Dinheiro (15%% de desconto!!)\n");
    printf("2 - Cartão de crédito (10%% de desconto!!)\n");
    printf("3 - Em 2x (Sem juros!!)\n");
    printf("4 - Em 3x (10%% de juros!! )\n");
    scanf("%d", &pagamento);

    if (pagamento == 1) {
        desconto = valor * 0.15;
        total = valor - desconto;
    } else if (pagamento == 2) {
        desconto = valor * 0.10;
        total = valor - desconto;
    } else if (pagamento == 3) {
        total = valor;
    } else if (pagamento == 4) {
        total = valor + (valor * 0.10);
    } else {
        printf("Escolha invalida!!.\n");
        
    }

    printf("Preco total: R$ %.2f\n", total);

    return 0;
}