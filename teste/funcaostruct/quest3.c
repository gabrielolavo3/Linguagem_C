/* 
Descrição  : Criar uma struct que armazena as variáveis nome, preço e quantidade em estoque. Em seguida, desenvolva um menu 
para facilitar a escolha das opções. Use funções necessárias para calcular o valor total em estoque do produto e para atualizar 
a quantidade em estoque com base em uma compra! (função)
Professor  : Carlos Anderson Santos de Jesus 
Autor(a)   : Gabriel S. Olavo
Data atual : 11/12/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

// Declaração de constante, funções e struct

#define MAX_CHARACTER 250

struct produto {
    int quantidade;
    float preco;
    char nome[MAX_CHARACTER];
}; 

void titulo ( ) {
    system ("cls || clear");
    printf ("CENTRO LOGÍSTICO FASTLOG! Aquisição de Materiais e Consulta de Estoque\n\n");
}

int quantidadeProdutos (int quantia) {
    int quantidade_Estoque = 100;
    return quantidade_Estoque -= quantia;
}

float valor_Estoque (float dinheiro, float cifra, int estoque) {
    return (dinheiro * cifra) * estoque;
}

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis comuns e de acesso

    int opcao, acervo;
    float montante;
    struct produto aquisicao;

// Solicitando dados

    do {
    titulo ( );
        printf ("Código | Descrição\n");
        printf ("   1   | Realizar uma compra\n");
        printf ("   2   | Consultar estoque\n");
        printf ("   3   | Sair do programa\n\n");
        printf ("Selecione a opção desejada: ");
        scanf ("%d", &opcao);

        switch (opcao) {
        case 1:
            fflush (stdin);
            printf ("\nDigite o nome do produto: ");
            gets (aquisicao.nome);
            
            do {
                printf ("Digite a quantidade adquirida: ");
                scanf ("%d", &aquisicao.quantidade);

                if (aquisicao.quantidade > 100) {
                    printf ("\nQuantidade solicitada estar indisponível! Por favor, escolha uma quantidade menor\n\n"); }

                if (aquisicao.quantidade <= 0) {
                    printf ("\nQuantidade solicitada estar inválida! Por favor, escolha uma quantidade maior\n\n"); }

            } while (aquisicao.quantidade <= 0 || aquisicao.quantidade > 100);

            printf ("Digite o valor do produto: ");
            scanf ("%f", &aquisicao.preco);

// Passagem de parâmetro

            acervo = quantidadeProdutos(aquisicao.quantidade);
            montante = valor_Estoque(aquisicao.preco, aquisicao.quantidade, acervo);
            break;

// Tela de resultado

        case 2:
        if (acervo > 0) {

        titulo ( );
            printf ("Nome do produto: %s\n", aquisicao.nome);
            printf ("Quantidade no estoque: %d\n", acervo);
            printf ("Valor do estoque em produtos: R$ %.2f\n", montante);
            system ("pause");
        
        } else {
            system ("cls || clear");
            printf ("Não há dados para exibir. SELECIONE a 1º opção para adicionar informações de venda(s)!\n\n");
            system ("pause");
            opcao = 1;
            
            break; }
        
// Tela de encerramento

        case 3:
        titulo ( );
            printf ("Encerrando o algoritmo!");
            break;

        default:
            printf ("\nOpção Inválida! Por favor, selecione uma das opções disponíveis\n\n");
            break;
        }
        
    } while (opcao != 3);

    return 0;
}
