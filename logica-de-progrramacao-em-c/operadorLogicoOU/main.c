#include <stdio.h>
#include <stdlib.h>

int main()
{
    int codigo;

    printf("Digite um código: ");
    scanf("%d", &codigo);

    if(codigo == 0 || codigo == 1) {
        printf("Código válido. \n");
    } else {
        printf("Código inválido. \n");
    }

    return 0;
}
