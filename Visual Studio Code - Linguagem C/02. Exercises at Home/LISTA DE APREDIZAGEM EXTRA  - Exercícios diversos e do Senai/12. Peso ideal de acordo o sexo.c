/* 
Descrição  : Calcular o peso ideal (em Kgs) com base no sexo e altura do usuário! (função)
Professor  : Carlos Anderson Santos de Jesus
Autor(a)   : Gabriel S. Olavo
Data atual : 06/10/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

int main () {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    char sexo;
    char sexoReal [250];
    float altura, peso;

// Solicitando dados

    printf ("CALCULADORA DE PESO IDEAL CONFORME O SEXO!\n");
    printf ("Insira os dados para saber o seu peso adequado.\n\n");
    printf ("Digite 'M' ou 'm' para o sexo masculino\n");
    printf ("Digite 'F' ou 'f' para o sexo feminino\n\n");
    printf ("Informe o seu sexo: ");
    scanf ("%c", &sexo);
    printf ("Informe a sua altura (em M): ");
    scanf ("%f", &altura);

// Convertendo de minuscula para maiuscula e limpando o terminal

/* if (sexo == 'm') {
    sexo = 'M'; 

} else if (sexo == 'f') {
    sexo = 'F'; } */

// Comando do Ctype = Converte de minuscula para maiuscula
    sexo = toupper (sexo);

system ("cls || clear");

// Analisando o sexo e aplicando a fórmula

switch (sexo) {
    case 'M':
    peso = (72.7 * altura) - 58;
    strcpy (sexoReal, "Masculino");
    break;

    case 'F':
    peso = (62.1 * altura) - 44.7;
    strcpy (sexoReal, "Feminino");
    break;

default:
    printf ("Sexo informado é inválido!");
    break; }

// Tela de resultado

    printf ("RESUMO DOS DADOS! \n\n");
    printf ("Sexo informado: %s\n", sexoReal);
    printf ("Altura informada: %.2f M\n", altura);
    printf ("Peso ideal: %.2f Kgs\n", peso);

    return 0;
}
