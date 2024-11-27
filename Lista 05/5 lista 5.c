#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int agua_consumo[30];
    int i, j, tempo;
    int total_consumo = 0;
    double media_consumo;
    int maior_dia = 0, menor_dia = 0;

    srand(time(NULL));

    for (i = 0; i < 30; i++) {
        agua_consumo[i] = rand() % 401 + 100;
        printf("dia %d: %d litros\n", i + 1, agua_consumo[i]);
        total_consumo += agua_consumo[i];
    }

    for (i = 0; i < 29; i++) {
        for (j = i + 1; j < 30; j++) {
            if (agua_consumo[i] > agua_consumo[j]) {
                tempo = agua_consumo[i];
                agua_consumo[i] = agua_consumo[j];
                agua_consumo[j] = tempo;
            }
        }
    }

    media_consumo = (double)total_consumo / 30;
    maior_dia = 29;
    menor_dia = 0;

    printf("\nTotal consumo de agua: %d litros\n", total_consumo);
    printf("media consumo por dia: %.2f litros\n", media_consumo);
    printf("dia com maior consumo: dia %d\n", maior_dia + 1);
    printf("dia com menor consumo: dia %d\n", menor_dia + 1);

    return 0;
}