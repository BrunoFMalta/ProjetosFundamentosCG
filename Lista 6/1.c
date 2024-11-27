#include <stdio.h>

int main()
{
    int vet1[5] = {1, 5, 9, 2, 5};
    int vet2[5] = {7, 4, 13, 21, 6};
    int vet3[5] = {8, -3, 5, 7, 12};

    int M[3][5];

    for (int j = 0; j<5; j++)
    {
        M[0][j] = vet1[j];
        M[1][j] = vet2[j];
        M[2][j] = vet3[j];
    }

    for(int i=0; i<3; i++) 
    {
        for(int j=0; j<5; j++)
        {
            printf("%d ",M[i][j]);
        }
        printf("\n");
    }

    return 0;
}