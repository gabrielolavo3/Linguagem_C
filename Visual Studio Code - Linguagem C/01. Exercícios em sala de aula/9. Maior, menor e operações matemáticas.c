/* 
Descrição  : Ler 2 números, aplicar operações e identificar quais dos 2 é o maior e o menor valor ! (função)
Autor(a)   : Gabriel S. Olavo
Data atual : 02/10/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "portuguese");
    
// Declaração de variáveis

    int primeiroNumero, segundoNumero, soma, multiplicacao;
    float media;

// Solicitando dados

    printf ("Informe o 1º número: ");
    scanf ("%i", &primeiroNumero);
    printf ("Informe o 2º número: ");
    scanf ("%i", &segundoNumero);

// Cálculo de soma, média, multiplicação e limpando o terminal

soma = primeiroNumero + segundoNumero;
media = soma /  2.0; 
multiplicacao = primeiroNumero * segundoNumero;

system ("cls || clear");

// Tela de resultado

    printf ("RESUMO DOS DADOS INSERIDOS E OPERAÇÕES \n\n");;
    printf ("1º número informado: %.0i \n", primeiroNumero);
    printf ("2º número informado: %.0i \n\n", segundoNumero);
    printf ("Operações básicas e maior e menor valor \n\n");
    printf ("Soma dos valores: %i \n", soma);
    printf ("Multiplicação dos valores: %i \n", multiplicacao);
    printf ("Média dos valores: %.2f \n\n", media);

// Exibindo o maior e o menor valor

    if (primeiroNumero > segundoNumero) {
        printf ("Maior valor: %i \n", primeiroNumero);
        printf ("Menor valor: %i \n", segundoNumero);
    } else {
        printf ("Maior valor: %i \n", segundoNumero);
        printf ("Menor valor: %i \n", primeiroNumero);
    }

    /* Operação ternária - Alternativa ao IF ElSE (Códigos Pequenos)

    maior = primeiroNumero > segundoNumero ? primeiroNumero : segundoNumero;
    menor = primeiroNumero < segundoNumero ? primeiroNumero : segundoNumero; */

    return 0;
}