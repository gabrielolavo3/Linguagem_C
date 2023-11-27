/* 
Descrição   : Criar um algoritmo que receba N números positivos ou negativos e imprimir a soma dos números positivos, dos números
negativos e a soma das duas somas anteriores. A leitura de valores termina com 0! (função)
Autor(a)   : Gabriel S. Olavo
Data atual : 27/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    int a = 0;
    float numeros;
    float somaGeral;
    float positivo = 0, negativo = 0;

// Solicitando dados

    printf ("NAGATIF ET POSITIF! Somando Positivos e Negativos\n\n");
    do {
        printf ("Informe o %d número (positivo ou negativo): ", a+1);
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

    printf ("NAGATIF ET POSITIF! Conclusão dos dados\n\n");
    printf ("Soma dos números positivos: %.2f\n", positivo);
    printf ("Soma dos números negativos: %.2f\n", negativo);
    printf ("Total da soma entre os números positivos e negativos: %.2f\n", somaGeral);

    return 0;
}