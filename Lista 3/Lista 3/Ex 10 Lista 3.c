#include <stdio.h>
#include <stdlib.h> // rand() to use to generate random numbers
#include <time.h>

int main () {

    int opcao;
    int sorteio;

    printf("Escolha o dado: \n");
    printf("1 - D4\n");
    printf("2 - D6\n");
    printf("3 - D8\n");
    printf("4 - D10\n");
    printf("5 - D12\n");
    printf("6 - D16\n");
    scanf("%d", &opcao);

        if (opcao == 1) {

            sorteio = 1 + rand() % 4;
        }

        else if (opcao == 2) {

             sorteio = 1 + rand() % 6;
        }

        else if (opcao == 3) {

             sorteio = 1 + rand() % 8;
        }

        else if (opcao == 4) {

             sorteio = 1 + rand() % 10;
        }

        else if (opcao == 5) {

             sorteio = 1 + rand() % 12;
        }
        
        else if (opcao == 6) {

             sorteio = 1 + rand() % 16;
        }

        else {

            printf("Opcao invalida!");
            
            sorteio = -1;
        }

        if (sorteio >= 0) {

            printf("O valor do sorteio es: %d", sorteio);
        }

    return 0;

}