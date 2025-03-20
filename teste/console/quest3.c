/* 
Descrição  : Ler uma nota e imprimir a classificação. Caso seja maior do que 9, é 'Excelente'; entre 7 e
8,9, é 'Bom'; entre 5 e 6,9, é 'Razoável', abaixo de 5 é 'Insuficente'! (função)
Professor  : Carlos Anderson Santos de Jesus 
Autor(a)   : Gabriel S. Olavo
Data atual : 07/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    float nota;
    char resultado [250];

// Solicitando dados

    printf ("GOI - EXAMINADOR DE NOTA\n\n");

do {
    printf ("Informe a nota: ");
    scanf ("%f", &nota);

// Aplicando classificação da nota

    if (nota >= 9 && nota <= 10) {
    strcpy (resultado, "Excelente!");
        
    } else if (nota >= 7 && nota <= 8.9) {
    strcpy (resultado, "Bom!");

    } else if (nota >= 5 && nota <= 6.9) {
    strcpy (resultado, "Razoável!");

    } else if (nota < 5) {
    strcpy (resultado, "Insuficiente!"); }

    if (nota < 0 || nota > 10) {
    printf ("\nNota INVÁLIDA! Informe um valor entre 0 e 10.\n"); }
    
} while (nota < 0 || nota > 10);

// Tela de resultado

system ("cls");

    printf ("GOI - EXAMINADOR DE NOTA\nResulatdo final\n\n");
    printf ("Nota informada: %.2f\n", nota);
    printf ("Classificação da nota: %s", resultado);

    return 0;
}
