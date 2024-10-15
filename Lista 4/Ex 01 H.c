#include <stdio.h>

int main() {
    int n, num, soma = 0;

    printf("Digite a quantidade de numeros a serem lidos: ");
    scanf("%d", &n);


    for (int i = 0; i < n; i++) {
        printf("Digite um numero: ");
        scanf("%d", &num);
        soma += num;
    }

  
    printf("A soma dos numeros lidos eh: %d\n", soma);

    return 0;
}
