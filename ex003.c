/*

3. Construa uma programa em C que armazene 15 números em um vetor e imprima uma
listagem numerada contendo o número e uma das mensagens: par ou ímpar.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //VARIAVEIS
    int i, vetor[15];
    //LIMPA PROMPT
    system("cls");

    //ENTRADA
    printf("Digite 15 numeros inteiros:\n");

    for(i = 0;i < 15; i++){
        printf("Digite a %i numero: ", i + 1);
        scanf("%i", &vetor[i]);
    }
    system("cls");
    for(i = 0; i < 15; i++){
        printf("%i \t\t %i  ", i + 1, vetor[i]);

        if( (vetor[i] % 2) == 0){
            printf("Numero par\n");
        }else
        {
            printf("Numero impar\n");
        }
        
    }


    return 0;
}