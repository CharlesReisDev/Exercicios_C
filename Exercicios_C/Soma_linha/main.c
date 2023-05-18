/*Problema "soma_linhas"
Fazer um programa para ler dois números inteiros M e N (máximo = 10). Em seguida, ler uma matriz
de M linhas e N colunas contendo números reais. Gerar um vetor de modo que cada elemento do vetor
seja a soma dos elementos da linha correspondente da matriz. Mostrar o vetor gerado. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int condM = 0, condN = 0;
    printf("Qual a quantidade de linhas da matriz? ");
    scanf("%d", &condM);

    printf("Qual a quantidade de colunas da matriz? ");
    scanf("%d", &condN);

    double mat[condM][condN];
    double vet[condM];

    for(int i = 0; i < condM; i++) {
        printf("Digite os elementos da %d a. linha:\n",i+1);
        for(int j = 0; j < condN; j++) {
            scanf("%lf", &mat[i][j]);
        }
    }

    for(int i = 0; i < condM; i++) {
        vet[i] = 0;
        for(int j = 0; j < condN; j++){
            vet[i] += mat[i][j];
        }
    }

    printf("VETOR GERADO:\n");
    for(int i = 0; i < condM; i++) {
        printf("%.1lf \n", vet[i]);
    }

    return 0;
}
