#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "portuguese");

// Declara��o de vari�veis

    int a = 0, numero, par = 0, impar = 0;
    float mediaGeral, mediadePar, somaTotal = 0, somadePar = 0; 

// Solicitando dados

do {
    printf ("Digite o %d� valor: ", a + 1);
    scanf ("%d", &numero);
    
    if  (numero > 0) {
    somaTotal += numero;
    a++;

    if (numero % 2 == 0) {
        par++;
        somadePar += numero;;

    } else {
        impar++; } }


} while (numero != 0);

mediadePar = somadePar / a;
mediaGeral = somaTotal / a;

// Tela de resultado

    printf ("Quantidade de pares %d \n", par);
    printf ("Quantidade de �mpares %d \n", impar);
    printf ("M�dia de n�meros pares: %.2f \n", mediadePar);
    printf ("M�dia geral de n�meros: %.2f \n", mediaGeral);

    return 0;
}