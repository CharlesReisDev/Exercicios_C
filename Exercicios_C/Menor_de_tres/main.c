/*Problema "menor_de_tres"
Fazer um programa para ler três números inteiros. Em seguida, mostrar qual o menor dentre os três
números lidos. Em caso de empate, mostrar apenas uma vez. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, n3;

    printf("Entre com primeiro numero tipo inteiro: ");
    scanf("%d", &n1);

    printf("Entre com segundo numero tipo inteiro: ");
    scanf("%d", &n2);

    printf("Entre com terceiro numero tipo inteiro: ");
    scanf("%d", &n3);

    if(n1 > n2 && n1 > n3) {
        printf("O primeiro numero digitado [%d] e o maior.",n1);
    }else if(n2 > n1 && n2 > n3) {
        printf("O segundo numero digitado [%d] e o maior.",n2);
    }else {
        printf("O terceiro numero digitado [%d]e o maior.",n3);
    }

    return 0;
}
