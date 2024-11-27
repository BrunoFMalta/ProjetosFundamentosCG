#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int matriz[4][6];
    int soma_linha2 = 0, soma_coluna5 = 0, soma_produto = 0, soma_colunas_pares = 0, soma_colunas_impares = 0;
    srand(time(NULL));

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            matriz[i][j] = rand() % 21 - 10; 
        }
    }

    for (int j = 0; j < 6; j++) {
        soma_linha2 += matriz[1][j]; 
        soma_coluna5 += matriz[j][4]; 
    }
    for (int i = 0; i < 4; i++) {
        soma_produto += matriz[0][i] * matriz[3][i]; 
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j += 2) {    
            soma_colunas_pares += matriz[i][j]; 
        }
    }
    for (int i = 1; i < 4; i += 2) {
        for (int j = 0; j < 6; j++) {
            soma_colunas_impares += matriz[i][j]; 
        }
    }

    printf("Soma da segunda linha: %d\n", soma_linha2);
    printf("Soma da quinta coluna: %d\n", soma_coluna5);
    printf("Soma do produto da primeira e quarta linha: %d\n", soma_produto);
    printf("Soma das colunas pares: %d\n", soma_colunas_pares);
    printf("soma das colunas impares: %d\n", soma_colunas_impares);

    return 0;
    }
}