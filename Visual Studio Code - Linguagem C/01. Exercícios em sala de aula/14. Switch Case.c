#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis
 
 float primeiroNumero, segundoNumero, resultado;
 char operacao;

// Solicitando dados

    printf ("BEM-VINDO A MINI CALCULADORA! \n\n");
    printf ("Digite o 1º número: ");
    scanf ("%f", &primeiroNumero);
    printf ("Digite o 1º número: ");
    scanf ("%f", &segundoNumero);

fflush (stdin); 

    printf ("\n\nINSIRA A OPERAÇÃO MATEMÁTICA \n\n");
    printf ("Digite '+' para operação de adição\n");
    printf ("Digite '-' para operação de subtração\n");
    printf ("Digite '*' para operação de multiplicação\n");
    printf ("Digite '/' para operação de divisão\n\n");
    printf ("Escolha a operação matemática: ");
    scanf ("%c", &operacao);

// Escolhendo operação com Switch Case

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
    printf ("Operação inválida; ");
    break; }

// Limpando o terminal 

system ("cls");

// Tela de resultado

    printf ("MINI CALCULADORA - RESULTADOS!\n\n");
    printf ("Primeiro número: %.2f \n", primeiroNumero);
    printf ("Segundo número: %.2f \n", segundoNumero);
    printf ("Operação escolhida: %c \n", operacao);
    printf ("Resultado da operação: %.2f \n", resultado);
    
    return 0;
}