/*

6. Construa um programa que permita armazenar o salário de 20 pessoas. Calcular e armazenar o novo salário sabendo-se que o reajuste foi de 8%. Imprimir uma listagem numerada com o salário e o novo salário. Declare quantos vetores forem necessários. 

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //VARIAVEIS
    float salario[20], salarioNovo[20];
    int i;
    system("cls");

    //ENTRADA
    printf("Digite o valor do salario dos funcionarios para o reajuste: \n");

    for (i = 0; i < 20 ; i++)
    {
        printf("Digite o Salario do %i funcionario: \n", i + 1);
        scanf("%f", &salario[i]);
        salarioNovo[i] = (salario[i] * 8) / 100; 
    }
    
    //SAIDA
    system("cls");
    printf("Funcionario\tSalario |\t| Salario novo\n");
    for(i = 0; i < 20; i++){
        printf("-----------------------------------------\n");
        printf("%i\t\t%.2f |\t| %.2f\n", i + 1, salario[i], salario[i] + salarioNovo[i]);
        printf("-----------------------------------------\n");
    }
    
    

    return 0;
}