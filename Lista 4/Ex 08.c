#include <stdio.h>

int main() {
    int num, fatorial;
    char resposta;

    do {
    
        printf("Digite um número inteiro positivo: ");
        scanf("%d", &num);

    
        fatorial = 1;
        for (int i = 1; i <= num; i++) {
            fatorial *= i;
        }

       
        printf("O fatorial de %d é %d\n", num, fatorial);

       
        printf("Deseja calcular outro fatorial? (s/n): ");
        scanf(" %c", &resposta);
    } while (resposta == 's' || resposta == 'S');

    return 0;
}
