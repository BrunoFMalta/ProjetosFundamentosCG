#include <stdio.h>

int main() {

    int numero;
   
    printf("Digite um número de 1 a 9 para ver a tabuada: ");
    scanf("%d", &numero);

 
    if (numero < 1 || numero > 9) {
        printf("Número inválido. Por favor, insira um número de 1 a 9.\n");
    } else {
      
        printf("Tabuada de %d:\n", numero);
        for (int i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", numero, i, numero * i);
        }
    }

    return 0;
}
