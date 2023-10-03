/* 
Descri��o  : Ler 2 n�meros, aplicar opera��es e identificar quais dos 2 � o maior e o menor valor ! (fun��o)
Autor(a)   : Gabriel S. Olavo
Data atual : 02/10/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "portuguese");
    
// Declara��o de vari�veis

    int primeiroNumero, segundoNumero, soma, multiplicacao;
    float media;

// Solicitando dados

    printf ("Informe o 1� n�mero: ");
    scanf ("%i", &primeiroNumero);
    printf ("Informe o 2� n�mero: ");
    scanf ("%i", &segundoNumero);

// C�lculo de soma, m�dia, multiplica��o e limpando o terminal

soma = primeiroNumero + segundoNumero;
media = soma /  2.0; 
multiplicacao = primeiroNumero * segundoNumero;

system ("cls || clear");

// Tela de resultado

    printf ("RESUMO DOS DADOS INSERIDOS E OPERA��ES \n\n");;
    printf ("1� n�mero informado: %.0i \n", primeiroNumero);
    printf ("2� n�mero informado: %.0i \n\n", segundoNumero);
    printf ("Opera��es b�sicas e maior e menor valor \n\n");
    printf ("Soma dos valores: %i \n", soma);
    printf ("Multiplica��o dos valores: %i \n", multiplicacao);
    printf ("M�dia dos valores: %.2f \n\n", media);

// Exibindo o maior e o menor valor

    if (primeiroNumero > segundoNumero) {
        printf ("Maior valor: %i \n", primeiroNumero);
        printf ("Menor valor: %i \n", segundoNumero);
    } else {
        printf ("Maior valor: %i \n", segundoNumero);
        printf ("Menor valor: %i \n", primeiroNumero);
    }

    /* Opera��o tern�ria - Alternativa ao IF ElSE (C�digos Pequenos)

    maior = primeiroNumero > segundoNumero ? primeiroNumero : segundoNumero;
    menor = primeiroNumero < segundoNumero ? primeiroNumero : segundoNumero; */

    return 0;
}