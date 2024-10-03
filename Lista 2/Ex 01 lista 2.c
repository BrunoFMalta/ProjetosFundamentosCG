#include <stdio.h>

int main () {

    int minutos, segundos;

    printf("Digite os minutos:");
    scanf("%d", &minutos);

    segundos = minutos * 60;

    printf("A quantidade em segundos eh:  %d\n", segundos);

    return 0;
    
}