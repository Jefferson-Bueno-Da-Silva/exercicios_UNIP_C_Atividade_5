/*

9. Faça um programa em C que leia dois conjuntos de números inteiros, tendo cada um 10
elementos. Ao final o programa deve listar os elementos comuns aos conjuntos.

*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 10


int main()
{
    int valores1[MAX], valores2[MAX];
    int i, j;

    system("cls");
    printf("Valores comuns: \n");

    for(i = 0; i < MAX; i++){
        printf("Digite o primeiro conjunto de valores: ");
        scanf("%i", &valores1[i]);
    }

    for(i = 0; i < MAX; i++){
        printf("Digite o segundo conjunto de valores: ");
        scanf("%i", &valores2[i]);
    }

    printf("\n\nvalores comuns: \n");
    printf("indice \t Valor 1\t valor 2 \n");
    for(i = 0; i < MAX; i++){
        for(j = 0; j < MAX; j++){
            if(valores1[i] == valores2[j]){
                printf("%i \t %i \t\t %i\n", i + 1, valores1[i], valores2[j]);
            }
        }
    }

    return 0;
}