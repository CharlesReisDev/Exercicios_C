/*Problema "media_idades"
Fa�a um programa para ler um n�mero indeterminado de dados, contendo cada um, a idade de um
indiv�duo. O �ltimo dado, que n�o entrar� nos c�lculos, cont�m um valor de idade negativa. Calcular
e imprimir a idade m�dia deste grupo de indiv�duos. Se for entrado um valor negativo na primeira vez,
mostrar a mensagem "IMPOSSIVEL CALCULAR".*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade = 0, idadeTotal = 0, cont = 0;
    double media = 0;

    printf("Digite as idades:\n");
    scanf("%d", &idade);

    while(idade >= 0){
        cont += 1;
        idadeTotal += idade;
        scanf("%d", &idade);
    }

    if(cont == 0) {
        printf("IMPOSSIVEL CALCULAR.");
    }else {
        media = (double)idadeTotal / cont;
        printf("MEDIA = %.2lf",media);
    }

    return 0;
}
