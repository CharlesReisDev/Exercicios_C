/*Problema "notas"
Fazer um programa para ler as duas notas que um aluno obteve no primeiro e segundo semestres de
uma disciplina anual. Em seguida, mostrar a nota final que o aluno obteve (com uma casa decimal) no
ano juntamente com um texto explicativo. Caso a nota final do aluno seja inferior a 60.00, mostrar a
mensagem "REPROVADO", conforme exemplos.
*/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    double nota1, nota2, soma;

    printf("Digite a primeira nota: ");
    scanf("%lf", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%lf", &nota2);

    soma = nota1 + nota2;

    if(soma > 60) {
        printf("APROVADO(A)");
    }else if(soma > 0 && soma < 60) {
        printf("REPROVADO(A)");
    }

    return 0;
}
