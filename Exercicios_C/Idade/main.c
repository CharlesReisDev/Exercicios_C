/*Problema "idades"
Fazer um programa para ler o nome e idade de duas pessoas. Ao final mostrar uma mensagem com os
nomes e a idade média entre essas pessoas, com uma casa decimal, conforme exemplo. */

#include <stdio.h>
#include <stdlib.h>

void scanner_string(char *buffer, int length) { /*Ler texto ate uma quebra de linha*/
 fgets(buffer, length, stdin);
 strtok(buffer, "\n");
}

void clear_scanner() { /*Limpa o lixo da entrada de dados ex: enter = quebra de linha*/
 char c;
 while ((c = getchar()) != '\n' && c != EOF) {}
}

int main()
{
    char nome1[50], nome2[50];
    int idade1, idade2;
    double idadeMedia;

    printf("Dados da primeira pessoa:\n");
    printf("Nome: ");
    scanner_string(nome1,50);
    printf("Idade: ");
    scanf("%d", &idade1);

    printf("Dados da segunda pessoa:\n");
    printf("Nome: ");
    clear_scanner();
    scanner_string(nome2,50);
    printf("Idade: ");
    scanf("%d", &idade2);

    idadeMedia = (double)(idade1 + idade2) / 2;

    printf("A idade media de %s e %s eh de %.1lf anos",nome1,nome2,idadeMedia);

    return 0;
}
