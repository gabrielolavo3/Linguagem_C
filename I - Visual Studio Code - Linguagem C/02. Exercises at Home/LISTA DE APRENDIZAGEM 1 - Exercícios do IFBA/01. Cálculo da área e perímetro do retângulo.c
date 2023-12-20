/* 
Descri��o  : Calcular a �rea e o per�metro do ret�ngulo ao inserir o tamanho da base e a altura! (fun��o)
Autor(a)   : Gabriel S. Olavo
Data atual : 14/10/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "portuguese");

// Declara��o de vari�veis

    float base, altura, area, perimetro;

// Solicitando dados

    printf ("CALCULADORA DE �REA E PER�METRO DO RET�NGULO!\n\n");
    printf ("Informe o valor da base (em Cm) do ret�ngulo: ");
    scanf ("%f", &base);
    printf ("Informe o valor da altura (em Cm) do ret�ngulo: ");
    scanf ("%f", &altura);

// Calculando a �rea, o per�metro e limpando o terminal

area = base * altura;
perimetro = 2 * (base + altura);
system ("cls || clear");

// Tela de resultado

    printf ("CALCULADORA DE �REA E PER�METRO DO RET�NGULO!\n");
    printf ("Resumo dos calculos\n\n");
    printf ("Base do ret�ngulo: %.2f Cm\n", base);
    printf ("Altura do ret�ngulo: %.2f Cm\n\n", altura);
    printf ("Resultado da �rea e do per�metro\n");
    printf ("�rea do ret�ngulo: %.2f Cm\n", area);
    printf ("Per�metro do ret�ngulo: %.2f Cm\n", perimetro);

    return 0;
}