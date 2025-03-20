/* 
Descrição  : Algoritmo para cadastrar vendas. Cada venda precisa do nome do produto, preço e quantidade.
Use um menu para o usuário digitar 1 para adicionar uma venda e o 2 para sair e exibir o preço total das vendas e a quantidade total de vendas! (função)
Professor  : Carlos Anderson Santos de Jesus 
Autor(a)   : Gabriel S. Olavo
Data atual : 28/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    int b = 0, a;
    int menu;
    int quantidade[200];
    float preco[200];
    float preco_Total = 0;
    char nome_do_Produto[200][250];

// Solicitando dados

    do {
        printf ("LOJA READY PLAYER ONE! Registro de Vendas do Vendedor\n\n");
        printf ("Código | Descrição\n");
        printf ("   1   | Adicionar venda\n");
        printf ("   2   | Sair e exibir total de vendas\n\n");
        printf ("Selecione a opção desejada: ");
        scanf ("%d", &menu);

            switch (menu) {
                case 1:
                    fflush (stdin);
                    printf ("\nDigite o nome do %dº produto: ", b+1);
                    gets (nome_do_Produto[b]);
                    printf ("Informe o preço do produto: ");
                    scanf ("%f", &preco[b]);
                    printf ("Informe a quantidade do produto: ");
                    scanf ("%d", &quantidade[b]);
                    
                    preco_Total = preco_Total + preco[b] * quantidade[b];
                    b++;

                    system ("cls || clear");
                break;

// Tela de resultado

                case 2:
                if (b > 0)  {
                    system ("cls || clear");
                    printf ("LOJA READY PLAYER ONE!! Lista de Vendas\n\n");
                        for (a = 0; a < b; a++) {
                            printf ("Nome do %dº produto: %s\n", a+1, nome_do_Produto[a]);
                            printf ("Preço do produto: R$ %.2f\n", preco[a]);
                            printf ("Quantidade do produto: %d\n", quantidade[a]);
                            printf ("\n");
                        }
                        printf ("Quantidade total de vendas: %d\n", b++);
                        printf ("Preço total das vendas: R$ %.2f\n", preco_Total);
                
                } else {
                    system ("cls || clear");
                    printf ("Não há dados para exibir. SELECIONE a 1º opção para adicionar informações de venda(s)!\n\n");
                    menu = 1;
                break; }

                if (menu != 1 && menu != 2) {
                default:
                system ("cls || clear");
                    printf ("Opção inválida! Escolha novamente\n\n");
                break; }
            }
                
    } while (menu != 2);

    return 0;
}
