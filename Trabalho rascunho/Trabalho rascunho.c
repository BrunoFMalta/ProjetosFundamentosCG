#include <stdio.h>
#include <stdlib.h>
#include <time.h> //time()
#include <stdbool.h>


int main (){

int um = 1, dois = 2, bac, opcao;
int ciclos;
float taxa = 0;
float nova_popu = 0;
int n, min, max;

printf("Menu\t\n");
printf("1 - Nova Simulação\n");
printf("2 - Sair do Programa\n");

printf("Escolha uma opcao\n");
scanf("%d", &opcao);


if (opcao == um)
{
    printf("Digite a população inicial de bactérias: \n");
    scanf("%d", &bac);

    printf("Taxa de crescimento:\n");
    scanf("%f", &taxa);


    nova_popu = bac + (bac * taxa / 100);
 

    printf("Número de ciclos: \n");
    scanf("%d", &ciclos);


    for (int i = 1; i <= ciclos; i++)
    {

        int random = rand() % 100 + 1;
        if (random <= 20)
        {
            nova_popu -= nova_popu * 0.3;
            printf("Ciclo %d: Populacao = %.2f (condição adversa: Alta Temperatura!)\n", i, nova_popu);
        }else if (random <= 35)
        {
            nova_popu -= nova_popu * 0.25;
            printf("Ciclo %d Populacao = %.2f (condição adversa: Falta de Nutrientes!)\n", i, nova_popu);

        }else if (random <= 45)
        {
            nova_popu -= nova_popu * 0.2;
            printf("Ciclo %d Populacao = %.2f (condição adversa: Excesso de Umidade!)\n", i, nova_popu);

        }else if (random <= 50)
        {
            nova_popu -= nova_popu * 0.5;
            printf("Ciclo %d Populacao = %.2f (condição adversa: Radiação Ultravioleta!)\n", i, nova_popu);

        } 
       else if (nova_popu <= 0)
        {
           printf("A POPULACAO MORREU, a simulacao nao pode continuar");
        }
        else {

            nova_popu += nova_popu * taxa;
            printf("Ciclo %d Populacao = %.2f \n", i, nova_popu);
        }
        
    }

        printf("Simulação concluída. População final: %.2f", nova_popu);


}else if (opcao == dois) {

    printf("PROGRAMA ENCERRADO\n");

}
return 0;
}