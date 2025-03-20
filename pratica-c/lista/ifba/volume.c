/* 
Descri��o  : Ler o raio e altura de uma lata e imprimir o resultado do volume para o usu�rio! (fun��o)
Autor(a)   : Gabriel S. Olavo
Data atual : 16/10/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declara��o de vari�veis

    float raio, altura, pi = 3.14, volume;

// Solicitando dados

    printf ("VOULME CALCULATOR FOR CYLINDRICAL OBJECTS!\n\n");
    printf ("Informe o valor do raio do objeto: ");
    scanf ("%f", &raio);
    printf ("Informe o valor da altura do objeto: ");
    scanf ("%f", &altura);

// Calculando o volume da lata de alum�nio

volume = pi * pow(raio,2) * altura;
system ("cls || clear");

// Tela de resultado

    printf ("VOULME CALCULATOR FOR CYLINDRICAL OBJECTS!\n\n");
    printf ("Raio: %.2f \n", raio);
    printf ("Altura: %.2f \n", altura);
    printf ("Resultado do Volume: %.2f metros c�bicos\n", volume);
    
    return 0;
}