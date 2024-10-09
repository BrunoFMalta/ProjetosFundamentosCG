#include <stdio.h>

int main() {
    int valor, centenas, cinquenta, vinte, dez, cinco, um;

    printf("Digite o valor: ");
    scanf("%d", &valor);

    centenas = valor / 100;
    valor %= 100;
    cinquenta = valor / 50;
    valor %= 50;
    vinte = valor / 20;
    valor %= 20;
    dez = valor / 10;
    valor %= 10;
    cinco = valor / 5;
    valor %= 5;
    um = valor;

    if (centenas > 0) {
        printf("%d nota(s) de R$ 100.\n", centenas);
    }
    if (cinquenta > 0) {
        printf("%dnota(s) de R$ 50.\n", cinquenta);
    }
    if (vinte > 0) {
        printf("%dnota(s) de R$ 20.\n", vinte);
    }
    if (dez > 0) {
        printf("%dnota(s) de R$ 10.\n", dez);
    }
    if (cinco > 0) {
        printf("%nota(s) de R$ 5.\n", cinco);
    }
    if (um > 0) {
        printf("%nota(s) de R$ 1.\n", um);
    }

    return 0;
}