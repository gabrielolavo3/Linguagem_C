/* 
Descri��o  : Calcular a nota semestral de um aluno. A nota semestral � obtida pela m�dia aritm�tica 
entre a nota de 2 bimestres. Cada nota de bimestre � composta por 2 notas de provas! (fun��o)
Autor(a)   : Gabriel S. Olavo
Data atual : 22/10/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declara��o de vari�veis

    int a = 0, b = 0;
    float primeiroBimestre, segundoBimestre, primeiraSoma, segundaSoma, primeiraMedia = 0, segundaMedia = 0, mediaFinal = 0;

// Solicitando dados

    printf ("UNIVERSIDADE WOLLSTONECRAFT\n");
    printf ("Insira os dados e calcule a sua m�dia semestral!\n\n");

// Recebendo e acumulando as notas do 1� bimestre
    
    printf ("Notas do primeiro bismetre\n");

for (a = 0; a < 2; a++) {
    printf ("Informe a %d� nota: ", a + 1);
    scanf ("%f", &primeiroBimestre);
    
    primeiraSoma += primeiroBimestre; }

// Recebendo e acumulando as notas do 2� bimestre
    
    printf ("\nNotas do segundo bismetre\n");

for (b = 0; b < 2; b++) {
    printf ("Informe a %d� nota: ", b + 1);
    scanf ("%f", &segundoBimestre);

    segundaSoma += segundoBimestre; }

// Calculando as m�dias e limpando o terminal

    primeiraMedia = (float) primeiraSoma / (float) a;
    segundaMedia = (float) segundaSoma / (float) b;
    mediaFinal = (float) (primeiraMedia + segundaMedia) / (float) 2;
system ("cls || clear");

// Tela de resultado
    
    printf ("UNIVERSIDADE WOLLSTONECRAFT\n");
    printf ("Resultado da m�dia do semestre!\n\n");
    printf ("M�dia do 1� bimestre: %.2f\n", primeiraMedia);
    printf ("M�dia do 2� bimestre: %.2f\n", segundaMedia);
    printf ("M�dia semestral: %.2f\n", mediaFinal);

    return 0;
}