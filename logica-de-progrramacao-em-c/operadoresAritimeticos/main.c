#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valorA, valorB;
    int soma, subtrair, multiplicar, dividir, resto;

    printf("Digite o primeiro valor: ");
    scanf("%d", &valorA);

    printf("Digite o segundo valor: ");
    scanf("%d", &valorB);

    soma = valorA + valorA;
    subtrair = valorA - valorB;
    multiplicar = valorA * valorB;
    dividir = valorA / valorB;
    resto = valorA % valorB;

    printf("A soma foi ..... %d \n", soma);
    printf("A sobtração foi ..... %d \n", subtrair);
    printf("A multiplicação foi ..... %d \n", multiplicar);
    printf("A divisão foi ..... %d \n", dividir);
    printf("O resto foi ..... %d \n", resto);

    return 0;
}
