/* 
Descrição  : Aplicar desconto ou parcelamento de compra com base na forma de pagamento! (função)
Professor  : Carlos Anderson Santos de Jesus 
Autor(a)   : Gabriel S. Olavo
Data atual : 06/10/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

// Declaração de variáveis

    float produto, desconto, total, valordaParcela;
    char pagamento;
    char formadePagamento [250];
    int parcela;

// Solicitando dados

    printf ("LOJA AVENIDA VAREJOS! \n\n");
    printf ("Digite o valor do produto: ");
    scanf ("%f", &produto);

// Limpando o cache de input
fflush (stdin);

    printf ("\nINSIRA A FORMA DE PAGAMENTO\n\n");
    printf ("Digite '1' para pagamento à vista\n");
    printf ("Digite '2' para pagamento à prazo\n\n");
    printf ("Informe a forma de pagamento: ");
    scanf ("%c", &pagamento);

// Definindo o pagamento e tela de resultado

switch (pagamento) {
case '1':

// Limpando o terminal e atribuindo nome a variável
system ("cls || clear");
strcpy (formadePagamento, "à vista");

    printf ("LOJA AVENIDA VAREJOS! \n\n");
    printf ("Valor do produto: R$ %.2f \n", produto);
    printf ("Forma de pagamento: %s \n", formadePagamento);
    printf ("Valor do desconto: R$ %.2f \n", desconto = produto * 0.10);
    printf ("Valor final: R$ %.2f \n", total = produto - desconto);
break;
    
case '2':

do {
    printf ("Informe a quantidade de percelas: ");
    scanf ("%d", &parcela);
    
    if (parcela > 6) {
    printf ("\nO parcelemento pode ser feito em até 06 parcelas.\n");
    printf ("Informe a quantidade de percelas novamente: "); }

} while (parcela > 6);

// Limpando o terminal e atribuindo nome a variável    
system ("cls || clear");
strcpy (formadePagamento, "à prazo");
        
    printf ("LOJA AVENIDA VAREJOS! \n\n");
    printf ("Forma de pagamento: %s \n", formadePagamento);
    printf ("Quantidade de parcelas: %.0d \n", parcela);
    printf ("Valor por parcela: R$ %.2f \n", valordaParcela = produto / parcela);
    printf ("Valor do produto: R$ %.2f \n", produto);
break;

default:
    printf ("Forma de pagamento é inválida!");
break; }

    return 0;
}
