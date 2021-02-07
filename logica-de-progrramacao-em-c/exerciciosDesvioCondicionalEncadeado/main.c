#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[80];
    float salBruto, txINSS, desconto, salLiquido;

    printf("Digite o nome do funcionário: ");
    gets(nome);

    printf("Digite o salário bruto: ");
    scanf("%f", &salBruto);

    if(salBruto <= 1000){
        txINSS = 8;
    } else if (salBruto <= 2000) {
         txINSS = 9;
    } else {
        txINSS = 10;
    }

    desconto = salBruto * txINSS / 100;
    salLiquido = salBruto - desconto;

    printf("Nome do funcionário.....: %s \n", nome);
    printf("Salário bruno.....: R$ %10.2f \n", salBruto);
    printf("Taxa de INSS.....: %.2f%% \n", txINSS);
    printf("Desconto de INSS.....: $ %10.2f \n", desconto);
    printf("Salário líquido.....: R$ %10.2f \n", salLiquido);


    return 0;
}
