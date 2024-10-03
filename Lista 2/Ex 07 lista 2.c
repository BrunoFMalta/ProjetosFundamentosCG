#include <stdio.h>

int main(){

int passaros, racao;

printf("Quantos passaros voce tens?");
scanf("%d", &passaros);

racao = passaros * 30;

printf("Voce precisa de %d gramas de racao por dia", racao);

return 0;

}