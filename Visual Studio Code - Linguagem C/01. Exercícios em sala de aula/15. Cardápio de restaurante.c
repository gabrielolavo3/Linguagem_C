#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "portuguese");
    
// Declara��o de vari�veis

    int codigo;
    char resultado [250];
    char valor [250];

// Solicitando dados

    printf ("------------- | Restaurante Pizza Planet | -------------\n");
    printf ("------------------ | Cad�rpio do Dia | ------------------\n\n");
    printf ("( ) C�dico 01 - Picanha\n");
    printf ("( ) C�dico 02 - Lasanha\n");
    printf ("( ) C�dico 03 - Strogonoff\n");
    printf ("( ) C�dico 04 - Bife acebolado\n");
    printf ("( ) C�dico 05 - P�o com ovo\n\n");
    printf ("Informe o n�mero do c�digo para selecionar seu prato: ");
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
    strcpy (resultado, "P�o com ovo");
    strcpy (valor, "R$ 5,00");
break;

default: 
    printf ("Op��o selecionada � inv�lida!");
break; }

system ("cls");

// Tela de resultado

    printf ("RESTAURANTE PIZZA PLANET!\n\n");
    printf ("N�mero do c�digo: %i\n", codigo);
    printf ("Nome do prato: %s\n", resultado);
    printf ("Valor do prato: %s\n", valor);

    return 0;
}