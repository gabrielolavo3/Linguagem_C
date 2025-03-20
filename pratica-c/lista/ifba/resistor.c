/* 
Descrição  : Calcular e imprimir a resitência equivalente de um circuito ao ler o valor de 2 resistores em paralelo e calcular o resulatdo com o valor de 1 resistor em série! (função)
Autor(a)   : Gabriel S. Olavo
Data atual : 27/10/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    float Primeiro_resitor;
    float Segundo_resitor;
    float Terceiro_resitor;
    float Resistencia_em_Paralelo = 0;
    float Resistencia_Equivalente = 0;

// Solicitando dados

    printf ("ELETROELETRÔNICA - MEDIÇÃO DE RESISTÊNCIA EQUIVALENTE EM CIRCUITOS ELÉTRICOS\n");
    printf ("Insira os valores dos resistores em paralelo e do resistor em série aos anteriores\n\n");
    printf ("Informe o valor do 1º resistor (R1): ");
    scanf ("%f", &Primeiro_resitor);
    printf ("Informe o valor do 2º resistor (R2): ");
    scanf ("%f", &Segundo_resitor);
    printf ("Informe o valor do 3º resistor (R3): ");
    scanf ("%f", &Terceiro_resitor);

// Calculando a resistência equivalente

    Resistencia_em_Paralelo = (Primeiro_resitor*Segundo_resitor) / (Primeiro_resitor+Segundo_resitor);
    Resistencia_Equivalente = Resistencia_em_Paralelo + Terceiro_resitor;

// Tela de resultado

system ("cls || clear");

    printf ("ELETROELETRÔNICA - MEDIÇÃO DE RESISTÊNCIA EQUIVALENTE EM CIRCUITOS ELÉTRICOS\n");
    printf ("Conclusão dos cálculos\n\n");
    printf ("Valor de R1 e R2: %.2f e %.2f Ohms\n", Primeiro_resitor, Segundo_resitor);
    printf ("Valor de R3: %.2f Ohms\n\n", Terceiro_resitor);
    printf ("Resistência do circuito em paralelo: %.2f Ohms\n", Resistencia_em_Paralelo);
    printf ("Resistência equivalente ou total: %.2f Ohms\n", Resistencia_Equivalente);

    return 0;
}