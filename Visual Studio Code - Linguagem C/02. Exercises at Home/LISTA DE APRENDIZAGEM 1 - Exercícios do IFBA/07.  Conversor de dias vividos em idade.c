/* 
Descrição  : Solicitar a idade de uma pessoa em dias e informar a idade em anos, meses e dias! (função)
Autor(a)   : Gabriel S. Olavo
Data atual : 16/10/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    int diasVividos, anos, meses, dias, resto;

// Solicitando dados

    printf ("CONTADOR DE DIAS DE VIDA! \nCom os dados, o algoritmo dirá sua idade, quantidade de meses e dias vividos\n\n");
    printf ("Informe a quantidade de dias: ");
    scanf ("%d", &diasVividos);

// Calculando a idade em anos, meses e dias

anos = diasVividos / 365;
resto = diasVividos % 365;
meses = resto / 30;
dias = resto % 30;

system ("cls || clear");

// Tela de resultados

    printf ("CONTADOR DE DIAS DE VIDA! \n\n");
    printf ("Período informado: %d dias \n\n", diasVividos);
    printf ("Resultado da conversão \n");
    printf ("Idade do usuário: %d (anos), %d (meses) e %d (dias) \n", anos, meses, dias);

    return 0;
}