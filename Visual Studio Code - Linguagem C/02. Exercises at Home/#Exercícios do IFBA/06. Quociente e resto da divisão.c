#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "portuguese");

// Declara��o de vari�veis

    int primeiroNumero, segundoNumero;
    float quociente, restodaDivisao;

// Solicitando dados

    printf ("MINI CALCULADORA DE DIVIS�O!\n\n");
    printf ("Insira o 1� n�mero: ");
    scanf ("%d", &primeiroNumero);
    printf ("Insira o 2� n�mero: ");
    scanf ("%d", &segundoNumero);

// Calculando o quociente e o resto da divis�o

quociente = primeiroNumero / segundoNumero;
restodaDivisao = primeiroNumero % segundoNumero;
system ("cls || clear");

// Tela de resultado

    printf ("MINI CALCULADORA DE DIVIS�O!\n\n");
    printf ("1� n�mero: %.0d\n", primeiroNumero);
    printf ("2� n�mero: %.0d\n", segundoNumero);
    printf ("Quociente da divis�o: %.0f\n", quociente);
    printf ("Resto da divis�o: %.0f\n", restodaDivisao);

    return 0;
}