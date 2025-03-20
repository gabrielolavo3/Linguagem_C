/* 
Descrição  : Ler o valor da compra e o dia da compra. Se a compra for no dia de semana, desconto de 10%;
se for fim de semana, desconto de 15%! (função)
Professor  : Carlos Anderson Santos de Jesus 
Autor(a)   : Gabriel S. Olavo
Data atual : 07/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    float compra, novoValor = 0;
    int diaDecompra;

// Solicitando dados

    printf ("LOJA STONE ONLINE - TECNOLOGIA E INOVAÇÃO!\n\n");
    printf ("Informe o valor da compra: ");
    scanf ("%f", &compra);

do {
    printf ("\nInforme em qual dia a compra foi realizada\n");
    printf ("Digite 1 para dia de semana\n");
    printf ("Digite 2 para fim de semana\n\n");
    printf ("Selecione a opção: ");
    scanf ("%d", &diaDecompra);

switch (diaDecompra) {
    
case 1:

    if (compra > 100) {
        novoValor = compra - (compra * 0.10);

    } else {
        novoValor = compra; }
    break;

case 2:

    if (compra > 100) {
        novoValor = compra - (compra * 0.15);

    } else {
        novoValor = compra; }
    break;

default:
    printf ("\nOpção selecionada é INVÁLIDA!\n");
    break; }

} while (diaDecompra < 1 || diaDecompra > 2);

// Tela de resultado

system ("cls");

    printf ("LOJA STONE ONLINE - TECNOLOGIA E INOVAÇÃO!\n\n");
    printf ("Valor inicial da compra: %.2f\n", compra);
    printf ("Valor final da compra: %.2f\n", novoValor);

    return 0;
}
