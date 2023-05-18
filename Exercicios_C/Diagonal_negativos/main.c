/*Problema "diagonal_negativos"
Fazer um programa para ler um número inteiro N (máximo = 10) e uma matriz quadrada de ordem N
contendo números inteiros. Em seguida, mostrar a diagonal principal e a quantidade de valores
negativos da matriz.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cond, contNegativo = 0;

    printf("Qual a ordem da matriz? ");
    scanf("%d", &cond);

    int numeros[cond][cond];

    for(int i = 0; i < cond; i++){
        for(int j = 0; j < cond; j++){
            printf("Elemento [%d,%d]: ",i,j);
            scanf("%d", &numeros[i][j]);
            if(numeros[i][j] < 0){
                contNegativo += 1;
            }
        }
    }

    printf("DIAGONAL PRINCIPAL:\n");
    for(int i = 0; i < cond; i++){
        printf("%d ", numeros[i][i]);
    }

    printf("\nQUANTIDADE DE NEGATIVOS = %d\n",contNegativo);

    return 0;
}
