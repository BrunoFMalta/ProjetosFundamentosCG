#include <stdio.h>

int main() {
    int idade, dependentes, depidade;
    float total;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite o numero de dependentes: ");
    scanf("%d", &dependentes);

    total = 300;

    for (int i = 0; i < dependentes; i++) {

        printf("Digite a idade do dependete %d: ", i + 1);
        scanf("%d", &depidade);

        if (depidade < 10) {
            total += 100;
        } else if (depidade <= 30) {
            total += 220;
        } else if (depidade <= 60) {
            total += 395;
        } else {
            total += 480;
        }
    }

    printf("Custo Total: R$ %.2f\n", total);

    return 0;
}