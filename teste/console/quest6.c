/* 
Descrição  : Ler a escolha de produto do usuário e imprimir o nome do produto e seu preço.
Usar 1 - camisa, 2 - calça e 3 - sapato! (função)
Professor  : Carlos Anderson Santos de Jesus 
Autor(a)   : Gabriel S. Olavo
Data atual : 07/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    int produto;
    float valor_do_Prouto;
    char nome_do_Produto [250];

// Solicitando dados

do {
    printf ("LOJA GEORGE MARTIN!\n\n");
    printf ("Escolha o produto\n");
    printf ("Digite '1' para camisa\n");
    printf ("Digite '2' para calça\n");
    printf ("Digite '3' para sapato\n\n");
    printf ("Selecione o produto desejado: ");
    scanf ("%d", &produto);

// Identificando produto e preço

    switch (produto) {
    case 1:
        strcpy (nome_do_Produto, "Camisa");
        valor_do_Prouto = 85.49;
        break;

    case 2:
        strcpy (nome_do_Produto, "Calça");
        valor_do_Prouto = 125.59;
        break;

    case 3:
        strcpy (nome_do_Produto, "Sapato");
        valor_do_Prouto = 149.99;
        break;
    
    default:
    system ("cls");
        printf ("Opção selecionada é INVÁLIDA! Escolha novamente.\n\n");
        break; }

} while (produto <= 0 || produto > 3);

// Tela de resultado
    
    system ("cls");
    printf ("LOJA GEORGE MARTIN!\n\n");
    printf ("Produto selecionado: %s\n", nome_do_Produto);
    printf ("Valor do produto: R$ %.2f", valor_do_Prouto);

    return 0;
}
