#include <stdio.h>

int main() {
    int n;
    char caracter;


    printf("Digite o número de linhas: ");
    scanf("%d", &n);
    printf("Digite o caractere: ");
    scanf(" %c", &caracter);

  
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n - i; j++) {
            printf(" ");
        }
        for (int k = 0; k < (2 * i - 1); k++) {
            printf("%c", caracter);
        }
        printf("\n");
    }

    return 0;
}
