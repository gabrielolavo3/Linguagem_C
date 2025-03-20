/* 
Descrição  : Analisar a necessidade de requerer a aposentadoria com base na idade e no tempo de trabalho! (função)
Autor(a)   : Gabriel S. Olavo
Data atual : 02/10/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL,"portuguese");
    
// Declaração de variáveis

char codigo [250];
char resultado [250];
int anodeNascimento, tempodeTrabalho, idade;

// Solicitando dados

    printf ("INSTITUTO NACIONAL DE SEGURO SOCIAL!\n");
    printf ("Consulte o seu requerimento para a aposentadoria\n\n");
    printf ("Insira o nº do Códidgo do Empregado: ");
    fgets (codigo, 250, stdin);
    codigo [strcspn (codigo, "\n")] = 0;
    printf ("Insira o seu ano de nascimento: ");
    scanf ("%i", &anodeNascimento);
    printf ("Insira o seu tempo de trabalho (em Anos): ");
    scanf ("%i", &tempodeTrabalho);

// Calculando a idade do empregado

idade = 2023 - anodeNascimento;

// Verificando a necessidade do requerimento de aposentadoria

    if (idade >= 65 || tempodeTrabalho >= 30 ) {
        strcpy (resultado, "Requesição necessária!");
    } else {
        strcpy (resultado, "Requesição não é necessária!"); }

system ("cls");

// Tela de resultado

    printf ("INSTITUTO NACIONAL DE SEGURO SOCIAL! - Resumo da Consulta\n\n");
    printf ("Código do Empregado: %s \n", codigo);
    printf ("Ano de nascimento: %d \n", anodeNascimento);
    printf ("Idade atual ou aproximada: %d anos \n", idade);
    printf ("Tempo de trabalho: %d anos \n\n", tempodeTrabalho);
    printf ("Resultado da Consulta: %s", resultado);
    
    return 0;
}
