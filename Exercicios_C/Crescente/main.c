/*Problema "crescente" (adaptado de URI 1113)
Leia uma quantidade indeterminada de duplas de valores inteiros X e Y. Escreva para cada X e Y uma
mensagem que indique se estes valores foram digitados em ordem crescente ou decrescente. O
programa deve finalizar quando forem digitados dois valores iguais.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;

    do{
        printf("Digite dois numeros:\n");
        scanf("%d\n%d", &x,&y);

        if(x > y) {
            printf("Decrescente.\n\n");
        }else if(y > x) {
            printf("Crescente.\n\n");
        }

    }while(x != y);

    return 0;
}
