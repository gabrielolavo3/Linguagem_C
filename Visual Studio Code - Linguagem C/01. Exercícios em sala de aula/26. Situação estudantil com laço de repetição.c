#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main () {
    setlocale (LC_ALL, "portuguese");

// Declara��o de vari�veis

    int a;
    float nota, soma, media;
    char situacao [250];

// Solicitando dados e validando nota

for (a = 0; a < 3; a+=1) {
    do {
    printf ("Digite a %d� nota: ", a+1);
    scanf ("%f", &nota);

    if (nota < 0 || nota > 10) { 
    printf ("Nota inv�lida. \n Digite a nota do aluno \n: "); }

soma += nota;
} while (nota < 0 || nota > 10); }

// C�lculando a m�dia

media = soma / a;

// Aplicando situa��o

if (media >= 7) {
    strcpy (situacao, "Aprovado");

} else if (media >= 5 && media <= 6.9) {
    strcpy (situacao, "Recupera��o");

} else
    strcpy (situacao, "Reprovado");

// Tela de resultado

    printf ("\nM�dia: %.2f", media);
    printf ("\nSitua��o: %s", situacao);
    
    return 0;
}