/*

5. Faça um programa que armazene as notas das provas 1 e 2 de 15 alunos.
○ Calcule e armazene a média.
○ Armazene também a situação do aluno: 1- Aprovado ou 2-Reprovado.
○ Ao final o programa deve imprimir uma listagem contendo as notas, a média e a situação de
cada aluno em formato tabulado.
Utilize quantos vetores forem necessários para armazenar os dados.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //VARIAVEIS
    float media[15], nota1[15], nota2[15];
    int i, aluno[15];
    system("cls");
    //ENTRADA
    printf("Digite as notas das provas 1 e 2: \n");
    printf("Prova 1: \n");

    for(i = 0; i < 15; i++){
        printf("Digite a nota o %i aluno: ", i + 1);
        scanf("%f", &nota1[i]);
    }
    system("cls");
    printf("Prova 2: \n");

    for(i = 0; i < 15; i++){
        printf("Digite a nota o %i aluno: ", i + 1);
        scanf("%f", &nota2[i]);
    }

    system("cls");
    //PROCESSAMENTO

    //MEDIA
    for(i = 0; i < 15; i++){
        media[i] = (nota1[i] + nota2[i]) / 2;
        if(media[i] > 5){
            aluno[i] = 1;
        }else
        {
            aluno[i] = 2;
        }  
    }

    //SAIDA
    printf("status 1 = Aprovado, 2 = Reprovado\n");
    printf("Aluno\tprova 1\tprova 2\tmedia\tstatus\n");
    for(i = 0; i < 15; i++){
        printf("%i\t%.2f\t%.2f\t%.2f\t%i\n", i + 1, nota1[i], nota2[i], media[i], aluno[i]);
    }    

    return 0;
}