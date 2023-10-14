/* 
Descri��o  : Calcular a �rea e o per�metro da circunfer�ncia a partir do valor do raio! (fun��o)
Autor(a)   : Gabriel S. Olavo
Data atual : 14/10/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "portuguese");
    
// Declara��o de vari�veis

    float raio, area, perimetro;

// Solicitando dados

    printf ("CALCULADORA DE �REA E PER�METRO DA CIRCUNFER�NCIA!\n\n");
    printf ("Informe o valor do raio da circunfer�ncia: ");
    scanf ("%f", &raio);

// Calculando a �rea, o per�metro e limpando o terminal

area = 2 * 3.14 * (raio *raio);
perimetro = 2 * 3.14 * raio;

system ("cls");

// Tela de resultado

    printf ("CALCULADORA DE �REA E PER�METRO DA CIRCUNFER�NCIA!\n");
    printf ("Resumo dos calculos\n\n");
    printf ("Raio da circunfer�ncia: %.2f Cm\n\n", raio);
    printf ("Resultado da �rea e do per�metro\n\n");
    printf ("�rea da circunfer�ncia: %.2f Cm\n", area);
    printf ("Per�metro da circunfer�ncia: %.2f Cm\n", perimetro);
    
    return 0;
}