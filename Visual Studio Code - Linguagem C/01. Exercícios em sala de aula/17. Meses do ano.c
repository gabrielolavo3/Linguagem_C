#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "portuguese");
    
// Declara��o de vari�veis

    int numero;
    char mes [250];

// Solicitando dados

    printf ("INDICADOR DE MESES DO ANO! \n\n");
    printf ("Informe um n�mero correspondente a um m�s do ano: ");
    scanf ("%d", &numero);

// Convertendo o n�mero em meses

    switch (numero) {
    case 1:
        strcpy (mes, "Janeiro");
    break;

    case 2:
        strcpy (mes, "Fevereiro");
    break;

    case 3:
        strcpy (mes, "Mar�o");
    break;

    case 4:
        strcpy (mes, "Abril");
    break;

    case 5:
        strcpy (mes, "Maio");
    break;

    case 6:
        strcpy (mes, "Junho");
    break;

    case 7:
        strcpy (mes, "Julho");
    break;

    case 8:
        strcpy (mes, "Agosto");
    break;

    case 9:
        strcpy (mes, "Setembro");
    break;

    case 10:
        strcpy (mes, "Outubro");
    break;

    case 11:
        strcpy (mes, "Novembro");
    break;
    
    case 12:
        strcpy (mes, "Dezembro");
    break;

    default:
        printf ("N�mero informado � inv�lido!");
    break; }

system ("cls");

// Tela de resulatdo

    printf ("N�mero informado: %i \n", numero);
    printf ("M�s correspondente: %s \n", mes);
    
    return 0;
}