/*Problema "soma_vetor"
Faça um programa que leia N números reais e armazene-os em um vetor. Em seguida:
- Imprimir todos os elementos do vetor
- Mostrar na tela a soma e a média dos elementos do vetor
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cond = 0;
    double number = 0.0, soma = 0.0, media = 0.0;

    printf("Quantos numeros tipo real vai digitar? ");
    scanf("%d", &cond);

    if(cond > 0) {
        double vetor[cond];

        for(int i = 0; i < cond; i++) {
            printf("Digite um numero: ");
            scanf("%lf", &vetor[i]);
        }

        printf("Valores = ");
        for(int i = 0; i < cond; i++) {
            printf("%2.lf ",vetor[i]);
            soma += vetor[i];
        }
        media = soma/cond;
        printf("\nSOMA = %2.lf\n", soma);
        printf("MEDIA = %2.lf\n", media );
    }

    return 0;
}
