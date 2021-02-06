#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);

    if(numero > 0) {
        printf("O numero digitado foi %d", numero);
    } else {
        printf("O numero é zero ou negativo");
    }

    return 0;
}
