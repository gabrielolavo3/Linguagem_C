/* 
Descrição  : Ler um vetor de 20 posições com números e ler uma variável X qualquer. Caso o valor de X seja igual à algum valor do vetor,
imprimir a posição do número dentro do vetor! (função)
Autor(a)   : Gabriel S. Olavo
Data atual : 28/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Declaração de constantes

#define b 10

int main (void) {
  setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

  int a;
  int contador = 0;
  float x;
  float vetor[b];

// Solicitando dados
  
  printf ("NUMERIC SET! Contador de números em variáveis\n\n");
  for (a = 0; a < b; a++) {
    printf ("Informe o %d° valor: ", a+1);
    scanf ("%f", &vetor[a]);
  }

  printf ("\n");

  printf ("Informe o valor da posição X: ");
  scanf("%f", &x);

// Tela de resultado 

system ("cls || clear");

  printf ("NUMERIC SET!\n\n")
  for (a = 0; a < b; a++) {
    if (x == vetor[a]) {
      printf ("Elemento localizado!\nElemento pertencente à posição %d do conjunto\n", a);

/* Caso o valor não esteja no vetor, o contador irá acumular a quantidade de iterações feitas para encontrar no número de X */
 
    } else {
      contador++; }
  }

/* Mensagem de exibição caso o valor do contador se iguale a b(20), pois percorreu todo o vetor e não localizou o valor */

  if (contador == b) {
    printf ("O elemento informado não foi localizado no conjunto de números"); }
  
  return 0;
}