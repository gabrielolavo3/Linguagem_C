#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h> 

int main () {
    setlocale(LC_ALL, "portuguese"); 

// Declara��o de vari�veis
    float notaA;
    float notaB;
    float media;

// Coletando dados
    printf ("Informe a primeira nota: ");
    scanf ("%f", &notaA);
    printf ("Informe a segunda nota: ");
    scanf ("%f", &notaB);

// Limpatela
system ("cls || clear");

// Calculando média

media = (notaA + notaB) / 2;

// Tela de resultado
    printf ("Nota 01: %.2f \n", notaA);
    printf ("Nota 02: %.2f \n", notaB);
    printf ("M�dia: %.2f \n", media);

// Comando SE SEN�O para a situa��o do aluno

if (media >= 7) {
    printf ("Aprovado!");
} else {
    printf ("Reprovado!");
}

return 0;

}