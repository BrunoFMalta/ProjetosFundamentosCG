#include <stdio.h>

int main() {
    
    int divisor, inicio, final;

    
    printf("Digite o valor do divisor: ");
    scanf("%d", &divisor);

   
    printf("Digite o valor inicial do intervalo: ");
    scanf("%d", &inicio);
    printf("Digite o valor final do intervalo: ");
    scanf("%d", &final);

 
    printf("Números divisíveis por %d no intervalo [%d, %d]:\n", divisor, inicio, final);
    for (int i = inicio; i <= final; i++) {
        if (i % divisor == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}
