#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "portuguese");

// Declara��o de vari�veis

int a; 
float media, soma, nota;

// Solicitando dados e verificando a nota
    
for (a =1; a <= 2; a++) {
    do {
    printf ("Digite a nota do aluno: ");
    scanf ("%f", &nota); 
    
    if (nota < 0 || nota > 10) {
    printf ("Nota inv�lida. Digite a nota do aluno novamente...\n\n"); }

// Calculando a soma e fim do Do While
soma += nota;
    } while (nota < 0 || nota > 10); }

// Calculando a m�dia 
media = soma / --a; // a = 2

// Tela de resultado

    printf ("M�dia: %.2f", media);

return 0;

}