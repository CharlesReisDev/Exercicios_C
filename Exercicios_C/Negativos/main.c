/*Problema "negativos"
Faça um programa que leia um número inteiro positivo N (máximo = 10) e depois N números inteiros
e armazene-os em um vetor. Em seguida, mostrar na tela todos os números negativos lidos.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cond, contN = 0;

    printf("Quantos numeros você ira digitar? ");
    scanf("%d", &cond);

    if(cond > 0) {
        int vetor[cond];

        for(int i = 0; i < cond; i++) {
        printf("Digite um numero inteiro: ");
        scanf("%d", &vetor[i]);
        if(vetor[i] < 0) {
            contN -= 0;
        }
        }

        if(contN < 0) {
            printf("\nNUMEROS NEGATIVOS:\n");
        }else if(contN == 0) {
            printf("\nNAO TEVE NUMEROS NEGATIVOS:\n");
        }

        for(int i = 0; i < cond; i++) {
        if(vetor[i] < 0) {
            printf("%d\n", vetor[i]);
            }
        }
    }

    return 0;
}
