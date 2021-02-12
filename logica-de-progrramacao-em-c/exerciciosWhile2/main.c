#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, somaPos, somaNeg, contNeg, media;

    numero = 7;
    somaPos = somaNeg = contNeg = 0;

    while(numero != 0) {
        printf("Digite um número: ");
        scanf("%d", &numero);

        if(numero >= 0) {
            somaPos = somaPos + numero;
        } else {
            somaNeg = somaNeg + numero;
            contNeg++;
        }
    }

    media = somaNeg / contNeg;

    printf("Somatorio dos positivos: %d \n", somaPos);
    printf("Média dos negativos... %d \n", media);

    return 0;
}
