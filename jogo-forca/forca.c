#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    char p_chave[20], p_print[20];
    char resposta;
    int i = 0, cont = 0;
    char jogar_novamente = 'y';
    do
    {
        int erros = 0; // iniciar dentro do ENQUANTO!
        system("cls");
        printf("  --------------------------------------------\n");
        printf(" |                JOGO DA FORCA               |\n");
        printf("  --------------------------------------------\n");
        printf("\n                   PLAY 1:               \n");
        printf("\n");

        do
        {
            printf("  -> Entre com a palavra chave: ");
            scanf(" %s", p_chave);
            fflush(stdin);
            printf("  -> A palavra escolhida foi: %s", p_chave);
            cont = 0;
            for (i = 0; p_chave[i] != '\0'; i++)
            {
                cont++;
            }
            printf("\n  -> Você confirma? [Y/N]: ");
            scanf(" %s", &resposta);
            fflush(stdin);
        } while (resposta == 'N' || resposta == 'n');

        // Copiando a String para outra
        strcpy(p_print, p_chave);
        system("cls");
        /*printf("\n");
        printf("\n");
        for (i = 0; i < 30; i++)
        {
            printf("\n");
        }
        */

        /*      JOGADOR DOIS       */
        printf("\n                   PLAY 2:               \n\n");
        printf("  -> A palavra chave contém %d caracteres!\n", cont);

        // Substitui as letras por " _ "
        for (i = 0; i < cont; i++)
        {
            p_print[i] = '_';
        }

        printf("\n -----------");
        printf("\n|           |");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n|");
        printf("\n_");

        while (1)
        {
            printf("\n  -> Advinhe: ");

            // imprimindo " _ "
            for (i = 0; i < cont; i++)
            {
                printf("%c ", p_print[i]);
            }

            printf("\n\n  -> Letra: "); // Entrada da letra
            char letra;
            scanf("%c", &letra);
            fflush(stdin);
            int erro1 = 1;
            int aux = 0;
            for (i = 0; i < cont; i++)
            {
                if (letra == p_chave[i])
                {
                    p_print[i] = letra;
                    aux++;
                    erro1 = 0;
                }
            }

            if (erro1 == 1) // se não, incrementa erros
            {
                if (erros == 0)
                {
                    printf("\n------------");
                    printf("\n|           |");
                    printf("\n|           0");
                    printf("\n|            ");
                    printf("\n|            ");
                    printf("\n|");
                    printf("\n|");
                    printf("\n_");
                    printf("\n");
                }
                if (erros == 1)
                {
                    printf("\n------------");
                    printf("\n|           |");
                    printf("\n|           0");
                    printf("\n|           |");
                    printf("\n|            ");
                    printf("\n|");
                    printf("\n|");
                    printf("\n_");
                    printf("\n");
                }
                else if (erros == 2)
                {
                    printf("\n------------");
                    printf("\n|           |");
                    printf("\n|           0");
                    printf("\n|          -|");
                    printf("\n|            ");
                    printf("\n|");
                    printf("\n|");
                    printf("\n_");
                    printf("\n");
                }
                else if (erros == 3)
                {
                    printf("\n------------");
                    printf("\n|           |");
                    printf("\n|           0");
                    printf("\n|          -|-");
                    printf("\n|            ");
                    printf("\n|");
                    printf("\n|");
                    printf("\n_");
                    printf("\n");
                }
                else if (erros == 4)
                {
                    printf("\n------------");
                    printf("\n|           |");
                    printf("\n|           0");
                    printf("\n|          -|-");
                    printf("\n|          / ");
                    printf("\n|");
                    printf("\n|");
                    printf("\n_");
                    printf("\n");
                }
                erros++;
            }
            // verifica se o jogo acabou
            if (erros == 6)
            {
                printf("\n------------");
                printf("\n|           |");
                printf("\n|           0");
                printf("\n|          -|-");
                printf("\n|          / \\");
                printf("\n|");
                printf("\n|");
                printf("\n_");
                printf("\n");
                printf("\n  -> Palavra chave é: %s\n", p_chave);
                printf("  --------------------------------------------\n");
                printf(" |            *** GAME OVER! ***               |\n");
                printf("  --------------------------------------------\n");
                printf("\n\n\n");
                break;
            }
            printf("\n");

            if (strcmp(p_chave, p_print) == 0) // verifica p_chave == p_print ou função compare
            {
                printf("\n  -> Palavra chave: %s\n", p_chave);
                printf("  --------------------------------------------\n");
                printf(" |             *** You Win ***                |\n");
                printf("  --------------------------------------------\n");
                break;
            }
        }

        printf("Deseja jogar novamente [Y/N]? ");
        scanf(" %s", &jogar_novamente);
        fflush(stdin);
    } while (jogar_novamente == 'y' || jogar_novamente == 'Y');

    return 0;
}