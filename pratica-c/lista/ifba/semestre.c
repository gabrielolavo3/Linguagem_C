/* 
Descrição  : Calcular a nota semestral de um aluno. A nota semestral é obtida pela média aritmética 
entre a nota de 2 bimestres. Cada nota de bimestre é composta por 2 notas de provas! (função)
Autor(a)   : Gabriel S. Olavo
Data atual : 22/10/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    int a = 0, b = 0;
    float primeiroBimestre, segundoBimestre, primeiraSoma, segundaSoma, primeiraMedia = 0, segundaMedia = 0, mediaFinal = 0;

// Solicitando dados

    printf ("UNIVERSIDADE WOLLSTONECRAFT\n");
    printf ("Insira os dados e calcule a sua média semestral!\n\n");

// Recebendo e acumulando as notas do 1º bimestre
    
    printf ("Notas do primeiro bismetre\n");

for (a = 0; a < 2; a++) {
    printf ("Informe a %dº nota: ", a + 1);
    scanf ("%f", &primeiroBimestre);
    
    primeiraSoma += primeiroBimestre; }

// Recebendo e acumulando as notas do 2º bimestre
    
    printf ("\nNotas do segundo bismetre\n");

for (b = 0; b < 2; b++) {
    printf ("Informe a %dº nota: ", b + 1);
    scanf ("%f", &segundoBimestre);

    segundaSoma += segundoBimestre; }

// Calculando as médias e limpando o terminal

    primeiraMedia = (float) primeiraSoma / (float) a;
    segundaMedia = (float) segundaSoma / (float) b;
    mediaFinal = (float) (primeiraMedia + segundaMedia) / (float) 2;
system ("cls || clear");

// Tela de resultado
    
    printf ("UNIVERSIDADE WOLLSTONECRAFT\n");
    printf ("Resultado da média do semestre!\n\n");
    printf ("Média do 1º bimestre: %.2f\n", primeiraMedia);
    printf ("Média do 2º bimestre: %.2f\n", segundaMedia);
    printf ("Média semestral: %.2f\n", mediaFinal);

    return 0;
}