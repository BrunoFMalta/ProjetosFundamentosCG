#include <stdio.h>

int main() {
    int cont = 20;
    int final = 50;

    printf("Números pares no intervalo [%d, %d]:\n", cont, final);
    for (int i = cont; i <= final; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
