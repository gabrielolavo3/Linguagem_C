/* 
Descrição  : Ler 3 números e verificar qual é o maior e o menor valor com operação ternária! (função)
Autor(a)   : Gabriel S. Olavo
Data atual : 02/10/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "portuguese");

// Declarando variáveis

    float primeiroNumero, segundoNumero, terceiroNumero, maior, menor;

// Solicitando dados

    printf ("informe o 1º número: ");
    scanf ("%f", &primeiroNumero);
    printf ("informe o 2º número: ");
    scanf ("%f", &segundoNumero);
    printf ("informe o 3º número: ");
    scanf ("%f", &terceiroNumero);

//Operação ternária para maior e menor número

    maior = primeiroNumero > segundoNumero ? primeiroNumero : segundoNumero;
    maior = maior > terceiroNumero ? maior : terceiroNumero;

    menor = primeiroNumero < segundoNumero ? primeiroNumero : segundoNumero;
    menor = menor < terceiroNumero ? menor : terceiroNumero;

system ("cls || clear");

// Tela de resultado

    printf ("RESUMO DOS DADOS INSERIDOS \n\n");
    printf ("1º número: %.2f \n", primeiroNumero);
    printf ("2º número: %.2f \n", segundoNumero);
    printf ("3º número: %.2f \n\n", terceiroNumero);
    printf ("Maior número: %.2f \n", maior);
    printf ("Menor número: %.2f \n", menor);

    return 0;
}
