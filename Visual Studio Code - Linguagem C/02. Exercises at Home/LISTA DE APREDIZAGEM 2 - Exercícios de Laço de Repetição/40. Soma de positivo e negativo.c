/* 
Descri��o   : Criar um algoritmo que receba N n�meros positivos ou negativos e imprimir a soma dos n�meros positivos, dos n�meros
negativos e a soma das duas somas anteriores. A leitura de valores termina com 0! (fun��o)
Autor(a)   : Gabriel S. Olavo
Data atual : 27/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declara��o de vari�veis

    int a = 0;
    float numeros;
    float somaGeral;
    float positivo = 0, negativo = 0;

// Solicitando dados

    printf ("NAGATIF ET POSITIF! Somando Positivos e Negativos\n\n");
    do {
        printf ("Informe o %d n�mero (positivo ou negativo): ", a+1);
        scanf ("%f", &numeros);
        a++;

        if (numeros > 0) {
            positivo+=numeros; }
        
        if (numeros < 0) {
            negativo+=numeros; }

        somaGeral = positivo + negativo;

    } while (numeros != 0);

// Tela de resultado

system ("cls || clear");

    printf ("NAGATIF ET POSITIF! Conclus�o dos dados\n\n");
    printf ("Soma dos n�meros positivos: %.2f\n", positivo);
    printf ("Soma dos n�meros negativos: %.2f\n", negativo);
    printf ("Total da soma entre os n�meros positivos e negativos: %.2f\n", somaGeral);

    return 0;
}