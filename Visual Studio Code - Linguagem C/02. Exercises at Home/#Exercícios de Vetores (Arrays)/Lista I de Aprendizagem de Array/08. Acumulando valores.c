/* 
Descrição  :  Leia um vetor de 40 posições e acumular e imprimir os valores! (função)
Autor(a)   : Gabriel S. Olavo
Data atual : 05/12/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Declaração de constante

#define G 40

int main ( ) {
  setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

  int a;
  float vetor[G], soma;

// Solicitando dados

printf ("ACUMULADOR DE VALORES! Leitor e somador de valores\n\n");
  for (a = 0; a < G; a++) {
    printf ("Digite o %dº valor: ", a+1);
    scanf ("%f", &vetor[a]);

    soma += vetor[a];
  }

// Tela de resultado

system ("cls || clear");

printf ("ACUMULADOR DE VALORES!\n\n");
  for (a = 0; a < G; a++) {
    printf ("%dº valor: %.2f\n", a+1, vetor[a]);
  }

printf ("\n");  
printf ("Soma dos valores: %.2f\n", soma);
  
  return 0;
}
