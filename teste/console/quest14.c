/* 
Descrição  : Ler uma quantidade indefinida de números inteiros e positivos, imprimir a média de valores
pares e ímpares. A leitura acaba ao digitar um número negativo! (função)
Professor  : Carlos Anderson Santos de Jesus 
Autor(a)   : Gabriel S. Olavo
Data atual : 07/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    int a = 0, numeros, par = 0, impar = 0;
    float mediaPar = 0, mediaImpar = 0, somaPar = 0, somaImpar = 0;

// Solicitando dados

    printf ("CONTADOR DE PARES E ÍMPARES\n\n");

do {
    printf ("Informe o %dº número: ", a + 1);
    scanf ("%d", &numeros);

// Acumulando os números pares e ímpares

    if (numeros > 0) {
        a++;
        
    if (numeros % 2 == 0) {
        par++;
        somaPar += numeros;
            
    } else {
        impar++; 
        somaImpar += numeros; }
}
            
} while (numeros >= 0);

// Calculando as médias

    mediaPar = somaPar / (float) par;
    mediaImpar = somaImpar / (float) impar;

// Tela de resultado

system ("cls || clear");

    printf ("CONTADOR DE PARES E ÍMPARES\n\n");
    printf ("Quantidade de pares: %d\n", par);
    printf ("Quantidade de ímpares: %d\n", impar);
    printf ("Média de pares: %.2f\n", mediaPar);
    printf ("Média de ímpares: %.2f\n", mediaImpar);

    return 0;
}
