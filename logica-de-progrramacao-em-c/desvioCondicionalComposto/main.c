#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if(numero > 0) {
        printf("POSITIVO \n");
    }  else {
        printf("NEGATIVO \n");
    }

    return 0;
}