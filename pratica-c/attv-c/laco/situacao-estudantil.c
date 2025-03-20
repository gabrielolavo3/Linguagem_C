#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main () {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    int a;
    float nota, soma, media;
    char situacao [250];

// Solicitando dados e validando nota

for (a = 0; a < 3; a+=1) {
    do {
    printf ("Digite a %dº nota: ", a+1);
    scanf ("%f", &nota);

    if (nota < 0 || nota > 10) { 
    printf ("Nota inválida. \n Digite a nota do aluno \n: "); }

soma += nota;
} while (nota < 0 || nota > 10); }

// Cálculando a média

media = soma / a;

// Aplicando situação

if (media >= 7) {
    strcpy (situacao, "Aprovado");

} else if (media >= 5 && media <= 6.9) {
    strcpy (situacao, "Recuperação");

} else
    strcpy (situacao, "Reprovado");

// Tela de resultado

    printf ("\nMédia: %.2f", media);
    printf ("\nSituação: %s", situacao);
    
    return 0;
}
