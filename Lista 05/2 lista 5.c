#include <stdio.h>

int main() {
    int v[5], i;

    printf("Digite 5 valores:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &v[i]);
    }

    printf("Resultado:\n");
    for (i = 0; i < 5; i++) {
        printf("%d x %d = %d\n", i, v[i], i * v[i]);
    }

    return 0;
}