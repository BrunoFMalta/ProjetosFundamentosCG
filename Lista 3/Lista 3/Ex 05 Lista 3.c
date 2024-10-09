#include<stdio.h>

int main()
{
    int n, result;

    printf("Digite um numero: ");
    scanf("%d",&n); 


     result = n % 2;


    if (result == 0)
    {
        printf("%d es par",n);
    }
    else
    {
        printf("%d es impar",n);
    }



    
    return 0;
}