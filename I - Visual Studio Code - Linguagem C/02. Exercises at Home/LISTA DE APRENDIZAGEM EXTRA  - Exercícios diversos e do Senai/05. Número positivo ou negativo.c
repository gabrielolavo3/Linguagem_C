#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "portuguese");

//Declarando variáveis
    
    float numero;

// Solicitando dados

    printf ("Digite um valor: ");
    scanf ("%f", &numero );

// Verificando se é positivo ou negativo

    if (numero >= 0) {
        printf ("Esse número é positivo");
    } else {
        printf ("Esse número é negativo"); }
    
    return 0;

}
