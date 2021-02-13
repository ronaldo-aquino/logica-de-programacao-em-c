#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao, contPan, contCha, contPra;

    contPan = contCha = contPra = 0;

    do {

        system("clear");
        printf("Menu de opções \n");
        printf("0 - Encerra o programa \n");
        printf("1 - Incluir uma panela no estoque \n");
        printf("2 - Incluir uma chaleira no estoque \n");
        printf("3 - Incluir um prato no estoque \n");
        printf("4 - Relatório de inclusões \n");

        scanf("%d", &opcao);

        switch(opcao) {
        case 0:
            printf("Encerrando o programa");
            break;
        case 1:
            contPan++;
            break;
        case 2:
            contCha++;
            break;
        case 3:
            contPra++;
            break;
        case 4:
            getchar();
            printf("Relátório");
            printf("Panelas: %d \n", contPan);
            printf("Chaleiras: %d \n", contCha);
            printf("Pratos: %d \n", contPra);

            break;
        default:
            printf("Opção inválida. \n");
        }

    } while (opcao != 0);

    return 0;
}
