#include  <stdio.h>

int main () {

    float compra, total;

    printf("Qual o valor? ");
    scanf("%f", &compra);

    if (compra <= 20) {
        total = compra * 0.45;
        printf("O total es %.2f ", total);

    } else if (compra <= 50) {
        total = compra * 0.35;
        printf("O total es %.2f ", total);

    } else if(compra > 50) {
        total = compra * 0.25;
        printf("O total es %.2f ", total);
    }

    return 0;
}