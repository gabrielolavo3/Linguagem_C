/* 
Descrição  : Calcular o valor do novo salário e imprimir o percentual de acréscimo, o valor do acréscimo e o novo salário! (função)
Autor(a)   : Gabriel S. Olavo
Data atual : 04/10/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "portuguese");
    
// Declaração de variáveis

    float salario, acrescimo, percentual, novoSalario;

// Solicitando dados

    printf ("SALARY COMPUTATION! \n");
    printf ("Consulte o seu aumento de salário! \n\n");
    printf ("Digite o valor atual do seu salário: ");
    scanf ("%f", &salario);

// Aplicando acréscimo de salário

if (salario <= 280.00) {
    percentual = 20;
    acrescimo = salario * 0.2;
    novoSalario = salario + acrescimo;

} else if (salario > 280.00 && salario <= 700.00) {
    percentual = 15;
    acrescimo = salario * 0.15;
    novoSalario = salario + acrescimo;

} else if (salario > 700.00 && salario <= 1500.00) {
    percentual = 10;
    acrescimo = salario * 0.1;
    novoSalario = salario + acrescimo;

} else {
    percentual = 5;
    acrescimo = salario * 0.05;
    novoSalario = salario + acrescimo; }

system ("cls || clear");

// Tela de resultado 

    printf ("SALARY COMPUTATION! - Resultado da Consulta. \n\n");
    printf ("Salário antes do reajuste: R$ %.2f \n", salario);
    printf ("Percentual de acréscimo: %.0f%% \n", percentual);
    printf ("Valor de acréscimo: R$ %.2f \n\n", acrescimo);
    printf ("Novo salário: R$ %.2f \n", novoSalario);
    
    return 0;
}