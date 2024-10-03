#include <stdio.h>

int main () {

    float GA, GB, final;

    printf("Qual a nota do seu GA: ");
    scanf("%f", &GA);

    printf("Qual a nota do seu GB: ");
    scanf("%f", &GB);

    final = (GA * 1 / 3) + (GB * 2 / 3);

    printf("Sua nota final eh: %.2f ", final);

    return 0;
}