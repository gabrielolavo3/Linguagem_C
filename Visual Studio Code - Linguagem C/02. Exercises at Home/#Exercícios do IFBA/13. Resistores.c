/* 
Descri��o  : Calcular e imprimir a resit�ncia equivalente de um circuito ao ler o valor de 2 resistores em paralelo e calcular
o resulatdo com o valor de 1 resistor em s�rie! (fun��o)
Autor(a)   : Gabriel S. Olavo
Data atual : 27/10/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declara��o de vari�veis

    float Primeiro_resitor;
    float Segundo_resitor;
    float Terceiro_resitor;
    float Resistencia_em_Paralelo = 0;
    float Resistencia_Equivalente = 0;

// Solicitando dados

    printf ("ELETROELETR�NICA - MEDI��O DE RESIST�NCIA EQUIVALENTE EM CIRCUITOS EL�TRICOS\n");
    printf ("Insira os valores dos resistores em paralelo e do resistor em s�rie aos anteriores\n\n");
    printf ("Informe o valor do 1� resistor (R1): ");
    scanf ("%f", &Primeiro_resitor);
    printf ("Informe o valor do 2� resistor (R2): ");
    scanf ("%f", &Segundo_resitor);
    printf ("Informe o valor do 3� resistor (R3): ");
    scanf ("%f", &Terceiro_resitor);

// Calculando a resist�ncia equivalente

    Resistencia_em_Paralelo = (Primeiro_resitor*Segundo_resitor) / (Primeiro_resitor+Segundo_resitor);
    Resistencia_Equivalente = Resistencia_em_Paralelo + Terceiro_resitor;

// Tela de resultado

system ("cls || clear");

    printf ("ELETROELETR�NICA - MEDI��O DE RESIST�NCIA EQUIVALENTE EM CIRCUITOS EL�TRICOS\n");
    printf ("Conclus�o dos c�lculos\n\n");
    printf ("Valor de R1 e R2: %.2f e %.2f Ohms\n", Primeiro_resitor, Segundo_resitor);
    printf ("Valor de R3: %.2f Ohms\n\n", Terceiro_resitor);
    printf ("Resist�ncia do circuito em paralelo: %.2f Ohms\n", Resistencia_em_Paralelo);
    printf ("Resist�ncia equivalente ou total: %.2f Ohms\n", Resistencia_Equivalente);

    return 0;
}