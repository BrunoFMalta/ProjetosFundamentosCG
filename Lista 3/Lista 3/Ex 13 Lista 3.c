#include <stdio.h>

int main() {
    int escolha;
    float gA, gB, gC, media, mediafinal;

    printf("Digite a nota do grau A: ");
    scanf("%f", &gA);

    printf("Digite a nota do grau B: ");
    scanf("%f", &gB);

    media = (gA + gB) / 2;

    printf("media: %.2f\n", media);

    if (media >= 6) {
        printf("Aprovado\n");
    } else {
        printf("Recuperacao\n");

        printf("Voce deseja substituir 1-grau A ou 2-grau B? ");
        scanf("%d", &escolha);

        printf("Digite a nota do grau C: ");
        scanf("%f", &gC);

        if (escolha == 1) {
            mediafinal = (gC + gB) / 2;
        } else if (escolha == 2) {
            mediafinal = (gA + gC) / 2;
        } else {
            printf("Escolha errada.\n");
            
        }

        printf("Nota Final: %.2f\n", mediafinal);

        if (mediafinal >= 6) {
            printf("Aprovado\n");
        } else {
            printf("Reprovado\n");
        }
    }

    return 0;
}