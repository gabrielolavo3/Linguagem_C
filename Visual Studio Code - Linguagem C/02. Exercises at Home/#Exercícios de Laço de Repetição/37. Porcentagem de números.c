/* 
Descrção  : Ler diversos valores e imprimir: 1 - Números abaixo de 35; 2 - Média de valores positivos; 3 - A porcentagem de números 
entre 50 e 100 entre todos os números digitados; 4 - A porcentagem de números entre 10 e 20 entre os números menores que 50! (função)
Autor(a)   : Gabriel S. Olavo
Data atual : 19/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    int a = 0;
    int numeros_menores_que35 = 0, numeros_abaixo_de50 = 0;
    float numeros;
    float media;
    float positivo = 0;
    float soma_Positivo = 0;
    float porcentagem, percentual;
    float intervalo_de_Numeros = 0, valores_Entre10e20 = 0;
    
// Solicitando dados    

    printf ("ANALISADOR NÚMEROS SHOCK!\nInsira valores positivos ou negativos ('0' encerra a leitura)\n\n");

    do {
        printf ("Digite o %dº número: ",a+1);
        scanf ("%f", &numeros);
        a++;

// Acumulando os números abaixo de 35

        if (numeros < 35) {
            numeros_menores_que35++; }

// Acumulando e somando os valores positivos  

        if (numeros > 0) {
            positivo++;
            soma_Positivo+=numeros; }

// Acumulando os valores que estão entre 50 e 100
    
        if (numeros >= 50 && numeros <= 100) {
            intervalo_de_Numeros++; }

// Acumulando os valores abaixo de 50 e os que estão entre 10 e 20

        if (numeros >= 0 && numeros < 50) {
            numeros_abaixo_de50++; }

        if (numeros >= 10 && numeros <= 20) {
            valores_Entre10e20++; }

    } while (numeros != 0);

// Calculando a média de números positivos e calculando a porcentagem de números digitados entre 50 e 100  

    media = soma_Positivo / positivo;
    porcentagem = (intervalo_de_Numeros / (float)a) * 100;

// Calculando a porcentagem de números digitados entre 10 e 20 entre os valores abaixo de 50 

    percentual = (valores_Entre10e20 / (float)numeros_abaixo_de50) * 100;

// Tela de resultado

system ("cls || clear");

    printf ("ANALISADOR DE NÚMEROS SHOCK!\n\n");
    printf ("Quantidade de números inferiores a 35: %d\n", numeros_menores_que35);
    printf ("Média dos números positivos: %.2f\n", media);
    printf ("Porcentagem de números entre 50 e 100 entre todos os números: %.2f%%\n", porcentagem);
    printf ("Porcentagem de números entre 10 e 20 entre os números menores que 50: %.2f%%\n", percentual);

    return 0;
}