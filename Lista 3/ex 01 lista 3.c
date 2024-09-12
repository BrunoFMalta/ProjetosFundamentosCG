#include <stdio.h>

int main (){

    int num1, num2, result;

    printf("Digite um numero para o num1: \n");
     scanf("%d", &num1);

    printf("Digite um numero para o num2: \n");
     scanf("%d", &num2);


    if (num2 == 0, num1== 0)
    {
        printf("ERRO");
    }else{

   
   result = num1 / num2;

   printf("A divisao eh: %d", result);
    }

    
return 0;


}