/* 
Descri��o  : Aplicar desconto ou parcelamento de compra com base na forma de pagamento! (fun��o)
Autor(a)   : Gabriel S. Olavo
Data atual : 06/10/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

// Declara��o de vari�veis

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

    printf ("\n\nINSIRA A FORMA DE PAGAMENTO\n\n");
    printf ("Digite '1' para pagamento � vista\n");
    printf ("Digite '2' para pagamento � prazo\n\n");
    printf ("Digite a forma de pagamento: ");
    scanf ("%c", &pagamento);

// Limpando o terminal
system ("cls || clear");
   
// Definindo o pagamento e tela de resultado

switch (pagamento) {
case '1':
strcpy (formadePagamento, "� vista");

    printf ("LOJA AVENIDA VAREJOS! \n\n");
    printf ("Valor do produto: R$ %.2f \n", produto);
    printf ("Forma de pagamento: %s \n", formadePagamento);
    printf ("Valor do desconto: R$ %.2f \n", desconto = produto * 0.10);
    printf ("Valor final: R$ %.2f \n", total = produto - desconto);
break;
    
case '2':
    printf ("Informe a quantidade de percelas: ");
    scanf ("%d", &parcela);
    
system ("cls || clear");
strcpy (formadePagamento, "� prazo");
        
    printf ("LOJA AVENIDA VAREJOS! \n\n");
    printf ("Forma de pagamento: %s \n", formadePagamento);
    printf ("Quantidade de parcelas: %.0d \n", parcela);
    printf ("Valor por parcela: R$ %.2f \n", valordaParcela = produto / parcela);
    printf ("Valor do produto: R$ %.2f \n", produto);
break;

default:
    printf ("Forma de pagamento � inv�lida!");
break; }

    return 0;
}