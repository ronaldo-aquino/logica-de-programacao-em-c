#include <stdio.h>
#include <stdlib.h>

int main()
{
    int codigo;

    printf("Digite o código do produto:");
    scanf("%d", &codigo);

    switch(codigo) {
    case 0:
        printf("Chaleira \n");
        break;
    case 1:
        printf("Panela \n");
         break;
    case 2:
        printf("Prato \n");
         break;
    case 3:
        printf("Caneca \n");
         break;
    default:
        printf("Código inválido \n");

    }

    return 0;
}
