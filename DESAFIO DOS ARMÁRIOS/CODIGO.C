#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    unsigned char controle = 0;
    int opcao, armario;
    int quantidadeLivres, posicao;

    srand(time(NULL));

    do
    {
        printf("\n===== ARMARIOS =====\n");
        printf("1 - Ocupar armario\n");
        printf("2 - Liberar armario\n");
        printf("3 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        if (opcao == 1)
        {
            quantidadeLivres = 0;

            /* Conta os armarios que estao livres */
            for (armario = 0; armario < 8; armario++)
            {
                if ((controle & (1 << armario)) == 0)
                {
                    quantidadeLivres++;
                }
            }

            if (quantidadeLivres == 0)
            {
                printf("\nTodos os armarios estao ocupados.\n");
            }
            else
            {
                /* Escolhe um dos armarios livres */
                posicao = rand() % quantidadeLivres;

                for (armario = 0; armario < 8; armario++)
                {
                    if ((controle & (1 << armario)) == 0)
                    {
                        if (posicao == 0)
                        {
                            controle = controle | (1 << armario);

                            printf("\nArmario %d foi ocupado.\n", armario);
                            break;
                        }

                        posicao--;
                    }
                }
            }
        }
        else if (opcao == 2)
        {
            printf("\nDigite o numero do armario (0 a 7): ");
            scanf("%d", &armario);

            if (armario < 0 || armario > 7)
            {
                printf("Armario invalido.\n");
            }
            else if ((controle & (1 << armario)) == 0)
            {
                printf("O armario %d ja esta livre.\n", armario);
            }
            else
            {
                controle = controle & ~(1 << armario);

                printf("Armario %d foi liberado.\n", armario);
            }
        }
        else if (opcao != 3)
        {
            printf("\nOpcao invalida.\n");
        }

        /* Mostra a situacao atual */
        if (opcao != 3)
        {
            printf("\nSituacao dos armarios:\n");

            for (armario = 0; armario < 8; armario++)
            {
                if ((controle & (1 << armario)) != 0)
                {
                    printf("Armario %d: ocupado\n", armario);
                }
                else
                {
                    printf("Armario %d: livre\n", armario);
                }
            }
        }

    } while (opcao != 3);

    printf("\nPrograma encerrado.\n");

    return 0;
}
