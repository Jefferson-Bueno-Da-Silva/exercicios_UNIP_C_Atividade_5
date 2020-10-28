/*

8. Construa um programa que armazene o código, a quantidade, o valor de compra e o valor de venda de 30 produtos. 
A listagem pode ser de todos os produtos ou somente de um ao se digitar o código. 

*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 30

//VARIAVEIS
int codigo[MAX], qtd[MAX];
int i, op;
float custo[MAX], venda[MAX];


void busca();
void listar();

int main()
{
    for(i = 0; i < MAX; i++){
        system("cls");
        printf("Cadastre os produtos: \n");
        printf("digite o %i produto: \n\n", i + 1);
        
        printf("codigo do produto: ");
        codigo[i] = i + 1;
        printf("%i\n\n", codigo[i]);

        printf("Digite a quantidade de estoque: \n");
        scanf("%i", &qtd[i]);

        printf("Digite o custo do produto: \n");
        scanf("%f", &custo[i]);

        printf("Digite o valor de venda do produto: \n");
        scanf("%f", &venda[i]);
    }

    volta:
    printf("listar produtos: \n1 - para pesquisar um produto\t2 - listar produtos\t3 - SAIR\n");
    scanf("%i", &op);

    switch (op)
    {
    case 1:
        busca();
        goto volta;
        break;
    case 2:
        listar();
        goto volta;
        break;
    case 3:
        break;
    default:
        printf("opcao invalida!\n");
        system("pause");
        goto volta;
    }
    

    return 0;
}

void busca(){

    int buscaProduto;
    system("cls");
    printf("digite o codigo do produto: \n");
    scanf("%i", &buscaProduto);

    for(i = 0; i < MAX; i++)
    {
        if(buscaProduto == codigo[i]){
            printf("\tCOD \tESTOQUE \t CUSTO \tVENDA\n");
            printf("\t %i \t %i \t\t %.2f \t%.2f \n", codigo[i], qtd[i], custo[i], venda[i]);
            break;
        }else if(buscaProduto != codigo[i] && (i + 1) == MAX)
        {
            printf("Produto nao encontrado!\n");
            break;
        }
        
    }
    system("pause");
}

void listar(){
    printf("\tCOD \tESTOQUE \t CUSTO \tVENDA\n");
    for (i = 0; i < MAX; i++)
    {
        printf("\t %i \t %i \t\t %.2f \t%.2f \n", codigo[i], qtd[i], custo[i], venda[i]);
    }
    
}