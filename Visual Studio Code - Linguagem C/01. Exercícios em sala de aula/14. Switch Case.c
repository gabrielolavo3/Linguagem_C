#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "portuguese");

// Declara��o de vari�veis
 
 float primeiroNumero, segundoNumero, resultado;
 char operacao;

// Solicitando dados

    printf ("BEM-VINDO A MINI CALCULADORA! \n\n");
    printf ("Digite o 1� n�mero: ");
    scanf ("%f", &primeiroNumero);
    printf ("Digite o 1� n�mero: ");
    scanf ("%f", &segundoNumero);

fflush (stdin); 

    printf ("\n\nINSIRA A OPERA��O MATEM�TICA \n\n");
    printf ("Digite '+' para opera��o de adi��o\n");
    printf ("Digite '-' para opera��o de subtra��o\n");
    printf ("Digite '*' para opera��o de multiplica��o\n");
    printf ("Digite '/' para opera��o de divis�o\n\n");
    printf ("Escolha a opera��o matem�tica: ");
    scanf ("%c", &operacao);

// Escolhendo opera��o com Switch Case

switch (operacao) {

case '+':
resultado = primeiroNumero + segundoNumero;
    break;
    
case '-':
resultado = primeiroNumero - segundoNumero;
    break;

case '*':
resultado = primeiroNumero * segundoNumero;
    break;

case '/':
resultado = primeiroNumero / segundoNumero;
    break;

default:
    printf ("Opera��o inv�lida; ");
    break; }

// Limpando o terminal 

system ("cls");

// Tela de resultado

    printf ("MINI CALCULADORA - RESULTADOS!\n\n");
    printf ("Primeiro n�mero: %.2f \n", primeiroNumero);
    printf ("Segundo n�mero: %.2f \n", segundoNumero);
    printf ("Opera��o escolhida: %c \n", operacao);
    printf ("Resultado da opera��o: %.2f \n", resultado);
    
    return 0;
}