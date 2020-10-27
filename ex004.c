/*

4. Faça um programa que armazene 8 números em um vetor e imprima todos os números. Ao
final, imprima o total de números múltiplos de seis.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //VARIAVEIS
    int valor[8], i, cont = 0;
    system("cls");

    //ENTRADA
    printf("Insira 8 numeros\n");
    
    //PROCESSAMENTO
    for(i = 0; i < 8; i++){
        printf("escreva %i numero: ", i + 1);
        scanf("%i", &valor[i]);
        if((valor[i] % 6) == 0){
            cont++;
        }
    }

    //SAIDA
    system("cls");

    for(i = 0; i < 8; i++){
        printf("%i\n", valor[i]);
    }

    printf("A quantidade de numeros inteiros divisiveis por 6 eh: %i", cont);

    return 0;
}