/*Problema "terreno"
Fazer um programa para ler as medidas da largura e comprimento de um terreno retangular com uma
casa decimal, bem como o valor do metro quadrado do terreno com duas casas decimais. Em seguida,
o programa deve mostrar o valor da área do terreno, bem como o valor do preço do terreno, ambos com
duas casas decimais, conforme exemplo.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double largura, comprimento, valor, areaTotal, valorTerreno;

    printf("Digite a largura do terreno: ");
    scanf("%lf", &largura);

    printf("Digite o comprimento do terreno: ");
    scanf("%lf", &comprimento);

    printf("Digite a valor do terreno: ");
    scanf("%lf", &valor);

    areaTotal = largura * comprimento;
    valorTerreno = valor * areaTotal;

    printf("Area do terreno: %.2lf\n", areaTotal);
    printf("preco do terreno: %.2lf\n", valorTerreno);

    return 0;
}
