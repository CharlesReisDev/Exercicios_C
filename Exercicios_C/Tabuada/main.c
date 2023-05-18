/*Problema "tabuada"
Ler um número inteiro N, daí mostrar na tela a tabuada de N para 1 a 10, conforme exemplo.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero = 0, i, resul = 0;

    printf("Deseja a tabuada qual valor? ");
    scanf("%d", &numero);

    for(i = 1; i <=10; i++) {
        resul = numero * i;
        printf("%d x %d = %d\n",numero,i,resul);
    }

    return 0;
}
