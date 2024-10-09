#include<stdio.h>

int main()
{
    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d",&n); 

    if (n % 3 == 0)
    {
        printf("%d es divisivel por 3.",n);
    }
    else
    {
        printf("%d nao es divisivel por 3.",n);
    }
    return 0;
}