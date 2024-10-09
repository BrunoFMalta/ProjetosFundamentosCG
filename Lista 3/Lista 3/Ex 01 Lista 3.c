#include <stdio.h>

int main (){


    int num1, num2;
    float result;


    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);


if (num2 > 0)
{
    result = num1 / num2;

    printf("A divisao dos numeros eh: %.2f", result);

}else{

     printf("ERRO, DIVISAO POR 0");
}

return 0;
}