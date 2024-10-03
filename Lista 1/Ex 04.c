#include <stdio.h>

int main() {

    char questao[100] = "Qual é o verdadeiro nome do super-herói Batman?";
    char alternativa1[50] = "a) Bruce Wayne";
    char alternativa2[50] = "b) Clark Kent";
    char alternativa3[50] = "c) Peter Parker";
    char alternativa4[50] = "d) Tony Stark";
    char alternativa5[50] = "e) Steve Rogers";
    char respostacorreta = 'a';  
    char respostausuario;

    printf("%s\n", questao);
    printf("%s\n", alternativa1);
    printf("%s\n", alternativa2);
    printf("%s\n", alternativa3);
    printf("%s\n", alternativa4);
    printf("%s\n", alternativa5);

    printf("Digite a letra correspondente à sua resposta: ");
    scanf(" %c", &respostausuario);  

    printf("Você respondeu alternativa %c. A resposta correta é a alternativa %c.\n", respostausuario, respostacorreta);

    return 0;
}