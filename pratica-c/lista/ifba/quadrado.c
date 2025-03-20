/* 
Descri��o  : Calcular a �rea e o per�metro do quadrado ao inserir o tamanho de 2 lados! (fun��o)
Autor(a)   : Gabriel S. Olavo
Data atual : 14/10/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "portuguese");

// Declara��o de vari�veis

    float primeiroLado, segundoLado, area, perimetro;

// Solicitando dados e validando os valores digitados

    printf ("CALCULADORA DE �REA E PER�METRO DO QUADRADO!\n");
    printf ("Informe valores iguais \n\n");

do {
    printf ("Informe o valor do 1� lado (em Cm) do quadrado: ");
    scanf ("%f", &primeiroLado);
    printf ("Informe o valro do 2� lado (em Cm) do quadrado: ");
    scanf ("%f", &segundoLado);

    if (primeiroLado != segundoLado) {
        printf ("\nOPS! Os valores informados s�o distintos. Insira os valores novamente...\n\n"); }
    
} while (primeiroLado != segundoLado);

// Calculando a �rea, o per�metro e limpando o terminal

area = primeiroLado * segundoLado;
perimetro = primeiroLado + segundoLado;
system ("cls || clear");

// Tela de resultado

    printf ("CALCULADORA DE �REA E PER�METRO DO QUADRADO!\n");
    printf ("Resumo dos calculos\n\n");
    printf ("Base do quadrado: %.2f Cm\n", primeiroLado);
    printf ("Altura do quadrado: %.2f Cm\n\n", segundoLado);
    printf ("Resultado da �rea e do per�metro\n");
    printf ("�rea do quadrado: %.2f Cm\n", area);
    printf ("Per�metro do quadrado: %.2f Cm\n", perimetro);

    return 0;
}