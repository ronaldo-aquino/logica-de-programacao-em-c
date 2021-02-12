#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, soma;

    soma = numero = 0;

    while(numero != -1) {
        printf("Digite um número: ");
        scanf("%d", &numero);

        if(numero != -1) {
            soma = soma + numero;
        }
    }

    printf("Somatorio dos números digitados: %d \n", soma);

    return 0;
}
