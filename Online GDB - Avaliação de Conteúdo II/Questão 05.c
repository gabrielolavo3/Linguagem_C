/* 
Descrição  : Criar um algoritmo para cadastrar contatos telefônicos, armazenando os nomes e números de telefone em vetores.
Use um menu de seleção: 1 - Adicionar contato e 2 - Encerrar e exibir as informações! (função)
Professor  : Carlos Anderson Santos de Jesus
Autor(a)   : Gabriel S. Olavo
Data atual : 14/12/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Declaração de constante e função

#define G 250

void titulo ( ) {
    system ("cls || clear");
    printf ("AGENDA VRITUAL IN BOX\n\n");
}

int main ( ) {
    setlocale (LC_ALL,"portuguese");

// Declaração de variáveis

    int a = 0, b, menu;
    char nome [G][G];
    int telefone[G];

// Solicitando dados

    do {
        titulo ( );
        printf ("Código | Descrição\n");
        printf ("   1   | Adicionar contato\n");
        printf ("   2   | Sair e exibir contato\n\n");
        scanf ("%d", &menu);

        switch (menu) {
            case 1:
            fflush (stdin);
                printf ("\nDigite o nome do contato: ");;
                gets (nome[a]);
                printf ("Digite o número do contato (somente números): ");
                scanf ("%d", &telefone[a]);
                a++;
            break;

// Tela de resultado

            case 2:
            titulo ( );
                for (b = 0; b < a; b++) {
                    printf ("Nome do %dº contato: %s\n", b+1, nome[b]);
                    printf ("Telefone do contato: %d\n", telefone[b]);
                    printf ("\n");
                }
            break;

            default:
                printf ("\nOpção inválida!\n");
            break;
        }

    } while (menu != 2);

    return 0;
}