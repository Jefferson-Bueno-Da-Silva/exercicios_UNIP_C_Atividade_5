/*

7. Crie um programa que leia o preço de compra e o preço de venda de 100 mercadorias (utilize
vetores). Ao final, o programa deverá imprimir quantas mercadorias proporcionam:
○ lucro < 10%
○ 10% <= lucro <= 20%
○ lucro > 20%

//formula para calculo da porcentagem de lucro = venda - custo/venda = x * 100 = x%

*/

#include <stdio.h>
#include <stdlib.h>
//CONSTANTE
#define MAX 3


int main()
{
    //VARIAVEIS
    float custos[MAX], vendas[MAX], lucros[MAX];
    int i, cont1 = 0, cont2 = 0, cont3 = 0;
    system("cls");

    //ENTRADAS
    printf("Lucros de me mercadorias 10%%, 20%%\n");
    for(i = 0; i < MAX; i++){
        printf("Digite o custos do %i produto:\n", i + 1);
        scanf("%f", &custos[i]);
        printf("Digite o vendas do %i produto:\n", i + 1);
        scanf("%f", &vendas[i]);

        //PROCESSAMENTO
        lucros[i] = ((vendas[i] - custos[i]) / vendas[i]) * 100;

        if(lucros[i] < 10){
            cont1++;
        }else if(10 <= lucros[i] && lucros[i] <= 20)
        {
            cont2++;
        }else
        {
            cont3++;
        }
        
        
    }

    //SAIDA
    printf("Lucros < 10%%\t\tLucros entre 10%% e 20%%\t\tLucros acima de 20%%\n");
    printf("%i \t\t\t\t %i \t\t\t\t %i \n", cont1, cont2, cont3);


    return 0;
}