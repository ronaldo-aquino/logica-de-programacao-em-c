#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;

    do {

        printf("Digite um número: ");
        scanf("%d", &numero);

    } while(numero != 0);

    return 0;
}
