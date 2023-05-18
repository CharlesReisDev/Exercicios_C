/*Problema "soma_impares" (adaptado de URI 1071)
Leia 2 valores inteiros X e Y (em qualquer ordem). A seguir, calcule e mostre a soma dos números
impares entre eles. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 0, y = 0, add = 0, soma = 0;
    printf("Digite dois valores inteiro X e Y!\n");
    scanf("%d %d", &x,&y);

    if(x > y) {
        add = x;
        x = y;
        y = add;
    }

    for(int i = x+1; i < y; i++) {
        if(i % 2 != 0) {
            soma += i;
        }
    }

    printf("SOMA DOS IMPARES = %d\n",soma);

    return 0;
}
