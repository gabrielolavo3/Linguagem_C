/* 
Descrção  : Fazer um algoritmo para uma pesquisa de mercado sobre um produto, lendo o sexo de 15 entrevistadoa e a opnião:
'G' - Gostou e 'N' - Não gostou. Com isso, imprimir: quantidade de pessoas que gostou e que não gostou; quantidade de 
mulheres que gostaram; quantidade de homens que não gostaram com relação a todos os homens! (função)
Autor(a)   : Gabriel S. Olavo
Data atual : 19/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    int a = 0;
    int opiniaoG = 0;
    int opiniaoN = 0;
    int mulheresQueGostou = 0;
    int TotaldeHomens = 0;
    int homensNaoGostou = 0;
    char sexo;
    char respostas;
    float percentual;

// Solicitando dados

    printf ("AGNI KAI MARKET!\nFormulário de avaliação de satisfação do novo produto LoG\n\n");

    for (a = 1; a <= 15; a++) {

// Lendo e validando o sexo

        do {
            fflush (stdin);
            printf ("Informe o sexo do %dº avaliado (F - feminino ou M - masculino): ",a);
            scanf ("%c", &sexo);
            sexo = toupper(sexo);

            switch (sexo) {
            case 'M':
            case 'F':
                break;
            
            default:
                printf ("\nSexo incorreto! Digite o sexo como 'Feminino' ou 'Masculino'\n\n");
                break; }

        } while (sexo != 'F' && sexo != 'M');

// Lendo e validando a opinião sobre produto

        do {
            fflush (stdin);
            printf ("Informe a opinião do avaliado sobre o produto (G - gostou ou N - não gostou): ");
            scanf ("%c", &respostas);
            respostas = toupper(respostas);

            switch (respostas) {
            case 'G':
            case 'N':
                break;

            default:
                printf ("\nOpinião incorreta! Digite a opinião com 'G' ou 'N'\n\n"); }

        } while (respostas != 'G' && respostas != 'N');

    printf ("\n");

// Acumulando a quantidade de respotas 'Gostou'

        if (respostas == 'G') {
            opiniaoG++;

// Acumulando a quantidade de respotas 'Não gostou'

        } else if (respostas == 'N') {
            opiniaoN++; }

// Acumulando a quantidade de mulheres que gostram do novo produto 

        if (sexo == 'F' && respostas == 'G') {
            mulheresQueGostou++; } 

// Acumulando a quantidade total de homens e quantos homens responderam 'Não gostou'

        if (sexo == 'M') {
            TotaldeHomens++; }

        if (sexo == 'M' && respostas == 'N') {
            homensNaoGostou++; }
    }

// Calculando a porcentagem de homens que não gostaram entre o total de homens entrevistados

    percentual = ((float)homensNaoGostou / (float)TotaldeHomens) * 100;

// Tela de resultado

system ("cls || clear");

    printf ("AGNI KAI MARKET!\nResultado Final da Avaliação\n\n");
    printf ("Número de pessoas que respondeu 'Gostou': %d\n", opiniaoG);
    printf ("Número de pessoas que respondeu 'Não': %d\n",opiniaoN);
    printf ("Número de mulheres que respondeu 'Gostou': %d\n", mulheresQueGostou);
    printf ("Porcentagem de homens que respondeu 'Não' entre todos os homens analisados: %.2f%%", percentual);

    return 0;
}