/*

2. Faça um programa que armazene 10 letras em um vetor e imprima uma listagem numerada.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //VARIAVEIS
    char vetor[10];
    int i;
    //LIMPA PROMPT
    system("cls");

    //ENTRADA
    printf("Digite 10 letras:\n");

    for(i = 0;i < 10; i++){
        printf("Digite a %i letra: ", i + 1);
        scanf("%s", &vetor[i]);
    }

    for(i = 0; i < 10; i++){
        printf("%i ............................. %c\n", i + 1, vetor[i]);
    }


    return 0;
}