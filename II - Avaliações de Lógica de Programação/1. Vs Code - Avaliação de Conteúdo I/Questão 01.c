/* 
Descri��o  : Ler 5 notas e imprimir a m�dia. Caso a m�dia seja maior ou igual a 7, imprimir a "Aprovado"; caso seja menor
imprimir "Reprovado". E caso a nota seja menor que 0 ou maior do que 10, repetir a pergunta! (fun��o)
Professor  : Carlos Anderson Santos de Jesus
Autor(a)   : Gabriel S. Olavo
Data atual : 02/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declara��o de vari�veis

    int a = 0;
    float nota;
    float somadeNota = 0;
    float media = 0;
    char situacaoFinal [250];

// Solicitando dados

    printf ("CALCULADORA DE M�DIA ESTUDANTIL\n\n");

for (a = 1; a <= 5; a++) {
do {
    printf ("Informe a %d� nota: ", a);
    scanf ("%f", &nota);

    if (nota < 0 || nota > 10) {
    printf ("\nNOTA INV�LIDA! Informe um valor entre 0 e 10.\n\n"); }
        
} while (nota < 0 || nota > 10);

// Acumulando o total de notas e calculando a m�dia

    somadeNota += nota;
    media = somadeNota / a; }

// Aplicando a situa��o estudantil

    if (media >= 7) {
    strcpy (situacaoFinal, "Parab�ns! O aluno foi APROVADO!");
    } else {
    strcpy (situacaoFinal, "O aluno foi REPROVADO!"); }

// Tela de resultado

system ("cls || clear");

    printf ("CALCULADORA DE M�DIA ESTUDANTIL - Resultados\n\n");
    printf ("M�dia: %.2f\n", media);
    printf ("Situa��o estudantil: %s", situacaoFinal);

    return 0;
}