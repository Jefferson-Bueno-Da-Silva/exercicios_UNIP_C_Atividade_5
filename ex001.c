/*

1. Faça um programa em C que armazene 15 números inteiros em um vetor e depois permita
que o usuário digite um número inteiro para ser buscado no vetor, se for encontrado o
programa deve imprimir a posição desse número no vetor, caso contrário, deve imprimir a
mensagem: "Nao encontrado!".

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, valor[15], valorBuscado;
    system("cls");
    printf("Digite 15 numeros inteiros, \ndepois digite um numero inteiro a ser buscado\n");
    for(i = 0; i < 15; i++){
        printf("Digite o %i numero inteiro:\n", i + 1);
        scanf("%i", &valor[i]);
    }
    printf("Digitem um numero a ser buscado: ");
    scanf("%i", &valorBuscado);

    for (i = 0; i < 15; i++)
    {
        if (valor[i] == valorBuscado)
        {
            printf("O numero %i foi encontrado na posicao %i", valorBuscado, i);
            exit(0);
        }
        
    }

    printf("Valor nao encontrado!");

    return 0;
}