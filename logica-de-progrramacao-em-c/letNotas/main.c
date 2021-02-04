#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[80];
    float nota1, nota2, nota3, media;

    printf("Digite o nome do aluno: ");
    gets(nome);
    __fpurge(stdin);
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1+nota2+nota3) / 3;

    printf("O aluno %s tem media: %.2f \n", nome, media);


    return 0;
}
