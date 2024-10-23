#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h> 


void position(int posiHamster1, int posiHamster2) {
    printf("H1: ");
    for (int i = 0; i < posiHamster1; i++) {
        printf("* ");
    }
    printf("\n");

    printf("H2: ");
    for (int i = 0; i < posiHamster2; i++) {
        printf("* ");
    }
}

int main() {
    srand(time(0)); 

    int posiHamster1 = 0;
    int posiHamster2 = 0;  
    bool end = false;  

    while (!end) { 
       
        int n1 = rand() % 5 + 1;
        if (n1 == 1) {
            posiHamster1++;
        } else if (n1 == 2) {
            posiHamster1 += 2;
        } else if (n1 == 4) {
            posiHamster1--;
        } else if (n1 == 5) {
            posiHamster1 -= 2;
        }

        if (posiHamster1 < 0) {
            posiHamster1 = 0;
        }

        int n2 = rand() % 5 + 1;
        if (n2 == 1) {
            posiHamster2++;
        } else if (n2 == 2) {
            posiHamster2 += 2;
        } else if (n2 == 4) {
            posiHamster2--;
        } else if (n2 == 5) {
            posiHamster2 -= 2;
        }

        if (posiHamster2 < 0) {
            posiHamster2 = 0;
        }

        position(posiHamster1, posiHamster2);

        if (posiHamster1 >= 12 && posiHamster2 >= 12) {
            printf("Empate!!\n");
            end = 1;
        } else if (posiHamster1 >= 12) {
            printf("Hamster 1 Venceu!!\n");
            end = 1;
        } else if (posiHamster2 >= 12) {
            printf("Hamster 2 Venceu!!\n");
            end = 1;
        }
    }

    printf("A corrida acabou!\n");
    return 0;
}
