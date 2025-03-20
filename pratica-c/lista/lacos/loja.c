/* 
Descri��o  : Ler o valor de 5 compras e imprimir se a soma das compras ultrapassou ou n�o o faturamento
de R$ 54.000,00! (fun��o)
Autor(a)   : Gabriel S. Olavo
Data atual : 02/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declara��o de vari�veis

    int a = 0;
    float valor_da_Compra;
    float soma_de_Valores = 0;

// Solicitando dados

    printf ("LOJAS STONE VAREJOS\n\n");

// La�o para coletar os valores e acumular

for (a = 1; a <= 5; a++) {
    printf ("Digite o valor da compra do %d� cliente: ", a);
    scanf ("%f", &valor_da_Compra);

    soma_de_Valores += valor_da_Compra; }

// Tela de resultado

    if (soma_de_Valores > 54000) {
        system ("cls || claer");
        printf ("LOJAS STONE VAREJOS\n\n");
        printf ("Faturamento de R$ 54.000 SUPERADO!\n");
        printf ("Total comprado: R$ %.2f\n", soma_de_Valores);
        printf ("Valor ultrapassado: R$ %.2f\n", soma_de_Valores - 54000);

    } else {
        printf ("\nO faturamento n�o foi superado"); }

    return 0;
}