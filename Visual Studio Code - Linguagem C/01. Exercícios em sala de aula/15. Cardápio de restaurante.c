#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "portuguese");
    
// Declaração de variáveis

    int codigo;
    char resultado [250];
    char valor [250];

// Solicitando dados

    printf ("------------- | Restaurante Pizza Planet | -------------\n");
    printf ("------------------ | Cadárpio do Dia | ------------------\n\n");
    printf ("( ) Códico 01 - Picanha\n");
    printf ("( ) Códico 02 - Lasanha\n");
    printf ("( ) Códico 03 - Strogonoff\n");
    printf ("( ) Códico 04 - Bife acebolado\n");
    printf ("( ) Códico 05 - Pão com ovo\n\n");
    printf ("Informe o número do código para selecionar seu prato: ");
    scanf ("%d", &codigo);

// Validando a escolha

switch (codigo) {
case 1:
    strcpy (resultado, "Picanha");
    strcpy (valor, "R$ 25,00");
break;

case 2:
    strcpy (resultado, "Lasanha");
    strcpy (valor, "R$ 20,00");
break;

case 3:
    strcpy (resultado, "Strogonoff");
    strcpy (valor, "R$ 18,00");
break;

case 4:
    strcpy (resultado, "Bife acebolado");
    strcpy (valor, "R$ 15,00");
break;

case 5:
    strcpy (resultado, "Pão com ovo");
    strcpy (valor, "R$ 5,00");
break;

default: 
    printf ("Opção selecionada é inválida!");
break; }

system ("cls");

// Tela de resultado

    printf ("RESTAURANTE PIZZA PLANET!\n\n");
    printf ("Número do código: %i\n", codigo);
    printf ("Nome do prato: %s\n", resultado);
    printf ("Valor do prato: %s\n", valor);

    return 0;
}