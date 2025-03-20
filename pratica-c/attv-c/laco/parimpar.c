#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    int a = 0, numero, par = 0, impar = 0;
    float mediaGeral, mediadePar, somaTotal = 0, somadePar = 0; 

// Solicitando dados

do {
    printf ("Digite o %dº valor: ", a + 1);
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

mediadePar = somadePar / (float) par; // 2 = 2.0
mediaGeral = somaTotal / (float) a;

// Tela de resultado

    printf ("Quantidade de pares %d \n", par);
    printf ("Quantidade de ímpares %d \n", impar);
    printf ("Média de números pares: %.2f \n", mediadePar);
    printf ("Média geral de números: %.2f \n", mediaGeral);

    return 0;
}
