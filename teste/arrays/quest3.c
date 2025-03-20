/* 
Descrição  : Cadastrar contatos telefônicos em uma agenda, utilizando vetores para armazenar os nomes e números de telefone. 
Permita que o usuário digite o código 1 para adicionar um contato e 2 para sair e mostrar os contatos cadastrados! (função)
Professor  : Carlos Anderson Santos de Jesus 
Autor(a)   : Gabriel S. Olavo
Data atual : 28/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    int a = 0, x;
    int menu;
    char nome[50][250];
    char telefone[50][250];

// Solicitando dados

    do {
        printf ("AGENDA VIRTUAL BOX\n\n");
        printf ("Código | Descrição\n");
        printf ("   1   | Adicionar contato\n");
        printf ("   2   | Sair e exibir lista de contatos\n\n");
        printf ("Selecione a opção desejada: ");
        scanf ("%d", &menu);

            switch (menu) {
                case 1:
                    fflush (stdin);
                    printf ("\nDigite o nome do %dº contato: ", a+1);
                    gets (nome[a]);
                    fflush (stdin);
                    printf ("Informe o número do contato: ");
                    gets (telefone[a]);
                    a++;
                    system ("cls || clear");
                break;

// Tela de resultado

                case 2:
                if (a > 0)  {  
                    system ("cls || clear");
                    printf ("AGENDA VIRTUAL BOX! Lista de Contados\n\n");
                        for (x = 0; x < a; x++) {
                            printf ("Nome %dº contato: %s\n", x+1, nome[x]);
                            printf ("Telefone do contato: %s\n", telefone[x]);
                            printf ("\n");
                        } 

                } else {
                    system ("cls || clear");
                    printf ("Não há dados para exibir. SELECIONE a 1º opção para adicionar contatos!\n\n");
                    menu = 1;
                break; }

                if (menu != 1 && menu != 2) {
                    default:
                        system ("cls || clear");
                        printf ("\nOpção inválida! Escolha novamente\n\n");
                    break; }
            }
                
    } while (menu != 2);

    return 0;
}
