#include <stdio.h>

int main (){

    int a, b, c;
    int somaAB;
    int somaAC;



    printf("Digite o valor de 'a': ");
    scanf("%d", &a);
    printf("Digite o valor de 'b': ");
    scanf("%d", &b);
    printf("Digite o valor de 'c': ");
    scanf("%d", &c);


somaAB = a + b;
somaAC = a + c;

if (somaAB < somaAC)
{
    printf("A soma de a + b eh menor que a soma de a + c\n");
    printf("A soma de a + c eh: %d\n", somaAC);
} else if (somaAB > somaAC)
{
    printf("A soma de a + b eh maior que a soma de a + c\n");
    printf("A soma de a + c eh: %d\n", somaAB);
}

return 0;
}