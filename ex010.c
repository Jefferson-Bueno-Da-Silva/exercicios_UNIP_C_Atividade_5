/*

10. Construa um programa que leia dados para um vetor de 100 elementos inteiros. Imprimir o
maior e o menor, sem ordenar, o percentual de números pares e a média dos elementos do
vetor.

*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 2

int main()
{
    //VARIAVEIS
    int valores[MAX], maior = 0, menor = 99999999, soma;
    int i;
    float media, pares;

    //ENTRADA
    system("cls");
    printf("vetor de 100 elementos: \n");
    for(i = 0; i < MAX; i++){
        printf("Digite o %i valor: ", i + 1);
        scanf("%i", &valores[i]);

        if(maior < valores[i]){
            maior = valores[i];
        }
        
        if(menor > valores[i]){
            menor = valores[i];
        }

        if((valores[i] % 2) == 0)
        {
            pares = pares + valores[i];
        }

        soma += valores[i];
        
    }

    pares = (pares / soma) * 100;

    media = ( soma / MAX);

    printf("Maior: %i\n", maior);
    printf("Menor: %i\n", menor);
    printf("Pares: %.1f%%\n", pares);
    printf("Media: %f\n", media);


    return 0;
}