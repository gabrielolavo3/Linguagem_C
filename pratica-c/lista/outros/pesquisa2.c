/* 
Descrição  : Com base em uma pesquisa populacional da prefeitura com X famílias, solicitar o número de filhos da família e 
valor do salário. Com isso, imprimir a média de filhos, menor e maior salário, média salarial e quantidade de famílias! (função)
Autor(a)   : Gabriel S. Olavo
Data atual : 21/10/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    int opcao, filhos, a = 0, acumula_Fliho = 0, media_de_Filhos = 0;
    float salario, soma_de_Salario = 0, media_dos_Salarios = 0, maior_Salario = 0, menor_Salario = 200000000000;

// Tela de seleção de comando

do {
    printf ("PREFEITURA DE WOLLSTONECRAFT\n");
    printf ("Dados Estatisticos Habitacionais de 2023\n\n");
    printf ("Código | Descrição\n");
    printf ("   1   | Adicionar família\n");
    printf ("   2   | Sair e exibir resultados\n\n");
    printf ("Selecione a opção desejada: ");
    scanf ("%d", &opcao);

// Solicitando dados

switch (opcao) {
case 1:

    printf ("\nINSIRA AS INFORMAÇÕES FAMÍLIARES\n\n");

// Validando e lendo o números de filhos

do {
    printf ("Informe a quantidade de filhos da família: ");
    scanf ("%d", &filhos);

    if (filhos < 0) {
    printf ("\nNúmeros de filhos INVÁLIDO! Informe o total correto de filhos\n"); }
} while (filhos < 0);

// Validando e lendo o valor do salário

do {
    printf ("Informe o valor do salário (em média) da família: ");
    scanf ("%f", &salario);

    if (salario < 0 || salario > 200000000000) {
    printf ("\nValor de salário INVÁLIDO! Informe o valor correto do salário\n"); }
} while (salario < 0 || salario > 200000000000);

    system ("cls || clear");

// Acumulando os salários, números de filhos e calculando o menor e maior salário entre as famílias
    
    maior_Salario = salario > maior_Salario ? salario : maior_Salario;
    menor_Salario = salario < menor_Salario ? salario : menor_Salario; 
    soma_de_Salario += salario;
    acumula_Fliho += filhos; 
    a++;
    break;

case 2:
// Limpando o terminal e calculando a média de salários e de filhos

    system ("cls || clear");
    media_dos_Salarios = (float) soma_de_Salario / (float) a;
    media_de_Filhos = (float) acumula_Fliho / (float) a;

// Tela de resultado e validação de informações do Case 1 para acessar o Case 2

    if (a > 0) {

    printf ("PREFEITURA DE WOLLSTONECRAFT - Resumo dos dados recolhidos\n\n");
    printf ("Total de famílias entrevistadas: %d\n", a);
    printf ("Média salarial: R$ %.2f\n", media_dos_Salarios);
    printf ("Média de filhos por família: %d\n", media_de_Filhos);
    printf ("Maior salário: R$ %.2f\n", maior_Salario);
    printf ("Menor salário: R$ %.2f\n", menor_Salario);
    break;

    } else {
    opcao = 1;
    printf ("ERRO! Não há dados para exibir. SELECIONE a 1º opção e informe o que é solicitado!\n\n");
    break; }

default:
system ("cls || clear");
    printf ("\nA opção selecionada é INVÁLIDA! Escolha a 1º ou 2º opção\n\n");
    break; }

} while (opcao != 2);

    return 0;
}