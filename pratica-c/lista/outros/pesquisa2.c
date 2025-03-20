/* 
Descri��o  : Com base em uma pesquisa populacional da prefeitura com X fam�lias, solicitar o n�mero de filhos da fam�lia e 
valor do sal�rio. Com isso, imprimir a m�dia de filhos, menor e maior sal�rio, m�dia salarial e quantidade de fam�lias! (fun��o)
Autor(a)   : Gabriel S. Olavo
Data atual : 21/10/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declara��o de vari�veis

    int opcao, filhos, a = 0, acumula_Fliho = 0, media_de_Filhos = 0;
    float salario, soma_de_Salario = 0, media_dos_Salarios = 0, maior_Salario = 0, menor_Salario = 200000000000;

// Tela de sele��o de comando

do {
    printf ("PREFEITURA DE WOLLSTONECRAFT\n");
    printf ("Dados Estatisticos Habitacionais de 2023\n\n");
    printf ("C�digo | Descri��o\n");
    printf ("   1   | Adicionar fam�lia\n");
    printf ("   2   | Sair e exibir resultados\n\n");
    printf ("Selecione a op��o desejada: ");
    scanf ("%d", &opcao);

// Solicitando dados

switch (opcao) {
case 1:

    printf ("\nINSIRA AS INFORMA��ES FAM�LIARES\n\n");

// Validando e lendo o n�meros de filhos

do {
    printf ("Informe a quantidade de filhos da fam�lia: ");
    scanf ("%d", &filhos);

    if (filhos < 0) {
    printf ("\nN�meros de filhos INV�LIDO! Informe o total correto de filhos\n"); }
} while (filhos < 0);

// Validando e lendo o valor do sal�rio

do {
    printf ("Informe o valor do sal�rio (em m�dia) da fam�lia: ");
    scanf ("%f", &salario);

    if (salario < 0 || salario > 200000000000) {
    printf ("\nValor de sal�rio INV�LIDO! Informe o valor correto do sal�rio\n"); }
} while (salario < 0 || salario > 200000000000);

    system ("cls || clear");

// Acumulando os sal�rios, n�meros de filhos e calculando o menor e maior sal�rio entre as fam�lias
    
    maior_Salario = salario > maior_Salario ? salario : maior_Salario;
    menor_Salario = salario < menor_Salario ? salario : menor_Salario; 
    soma_de_Salario += salario;
    acumula_Fliho += filhos; 
    a++;
    break;

case 2:
// Limpando o terminal e calculando a m�dia de sal�rios e de filhos

    system ("cls || clear");
    media_dos_Salarios = (float) soma_de_Salario / (float) a;
    media_de_Filhos = (float) acumula_Fliho / (float) a;

// Tela de resultado e valida��o de informa��es do Case 1 para acessar o Case 2

    if (a > 0) {

    printf ("PREFEITURA DE WOLLSTONECRAFT - Resumo dos dados recolhidos\n\n");
    printf ("Total de fam�lias entrevistadas: %d\n", a);
    printf ("M�dia salarial: R$ %.2f\n", media_dos_Salarios);
    printf ("M�dia de filhos por fam�lia: %d\n", media_de_Filhos);
    printf ("Maior sal�rio: R$ %.2f\n", maior_Salario);
    printf ("Menor sal�rio: R$ %.2f\n", menor_Salario);
    break;

    } else {
    opcao = 1;
    printf ("ERRO! N�o h� dados para exibir. SELECIONE a 1� op��o e informe o que � solicitado!\n\n");
    break; }

default:
system ("cls || clear");
    printf ("\nA op��o selecionada � INV�LIDA! Escolha a 1� ou 2� op��o\n\n");
    break; }

} while (opcao != 2);

    return 0;
}