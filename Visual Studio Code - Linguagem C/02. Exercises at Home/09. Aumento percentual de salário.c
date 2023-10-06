/* 
Descri��o  : Calcular o valor do novo sal�rio e imprimir o percentual de acr�scimo, o valor do acr�scimo e o novo sal�rio! (fun��o)
Autor(a)   : Gabriel S. Olavo
Data atual : 04/10/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "portuguese");
    
// Declara��o de vari�veis

    float salario, acrescimo, percentual, novoSalario;

// Solicitando dados

    printf ("SALARY COMPUTATION! \n");
    printf ("Consulte o seu aumento de sal�rio! \n\n");
    printf ("Digite o valor atual do seu sal�rio: ");
    scanf ("%f", &salario);

// Aplicando acr�scimo de sal�rio

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
    printf ("Sal�rio antes do reajuste: R$ %.2f \n", salario);
    printf ("Percentual de acr�scimo: %.0f%% \n", percentual);
    printf ("Valor de acr�scimo: R$ %.2f \n\n", acrescimo);
    printf ("Novo sal�rio: R$ %.2f \n", novoSalario);
    
    return 0;
}