/*Problema "alturas"
Fazer um programa para ler nome, idade e altura de N pessoas, conforme exemplo. Depois, mostrar na
tela a altura média das pessoas, e mostrar também a porcentagem de pessoas com menos de 16 anos,
bem como os nomes dessas pessoas caso houver. */

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
    int cond = 0;
    double somaAltura = 0.0, media = 0.0, contIdade = 0.0;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &cond);

    char nomes [cond][50];
    int idades[cond];
    double alturas[cond];

    for(int i = 0; i < cond; i++) {
        printf("Dados da %da pessoa:\n", i + 1);
        printf("Nome: ");
        clear_scanner();
        scanner_string(nomes[i],50);

        printf("Idade: ");
        scanf("%d", &idades[i]);
        if(idades[i] < 16) {
            contIdade ++;
        }

        printf("Altura: ");
        scanf("%lf", &alturas[i]);
        somaAltura = somaAltura + alturas[i];


    }

    media = somaAltura / cond;
    printf("\nAltura media: %.2lf\n", media);


    printf("Pessoas com menos de 16 anos: %.1lf %% \n", (contIdade * 100.0) / cond);
    for(int i = 0; i < cond; i++) {
        if(idades[i] < 16) {
            printf("%s \n", nomes[i]);
        }
    }

    return 0;
}
