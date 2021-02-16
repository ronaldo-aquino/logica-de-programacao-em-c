#include <stdio.h>
#include <stdlib.h>

int main()
{
    float notas[6];
    int i;
    float media = 0;

    for(i = 0; i < 6; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
        media = media + notas[i];
    }

    media = media / 6;

    for(i = 0; i < 6; i++) {
        printf("Nota %d = %.2f \n",i + 1, notas[i]);
    }

    printf("A média do aluno foi: %.2f \n", media);

    return 0;
}
