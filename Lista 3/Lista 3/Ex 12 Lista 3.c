#include <stdio.h>

int main() {
    int idade;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    if (idade >= 5 && idade <= 7) {
        printf("categoria infantil A\n");
    } else if (idade >= 8 && idade <= 10) {
        printf("categoria infantil B\n");
    } else if (idade >= 11 && idade <= 13) {
        printf("categoria juvenil A\n");
    } else if (idade >= 14 && idade <= 17) {
        printf("categoria juvenil B\n");
    } else {
        printf("categoria senior\n");
    }

    return 0;
}