#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "portuguese");

//Declarando vari�veis
    
    float numero;

// Solicitando dados

    printf ("Digite um valor: ");
    scanf ("%f", &numero );

// Verificando se � positivo ou negativo

    if (numero >= 0) {
        printf ("Esse n�mero � positivo");
    } else {
        printf ("Esse n�mero � negativo"); }
    
    return 0;

}