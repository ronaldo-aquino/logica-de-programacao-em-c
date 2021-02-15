#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);

    if(numero >= 0 && numero <=100) {
        printf("O número %d está entre 0 e 100", numero);
    } else {
        printf("O número %d não está entre 0 e 100", numero);
    }

    return 0;
}
