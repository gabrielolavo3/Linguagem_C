#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "");

// Declara��o de vari�veis

    int a = 0;
    int idade;
    int opiniao;
    int Bom_opiniao = 0;
    int Quant_otimo = 0;
    int Quantidade_Total = 0;
    int Otimo_idade = 0;
    int Regular_Quant = 0;
    float media;
    float percentual;

// Solicitando dados

    printf ("Question�rio de satisfa��o\n");
    printf ("C�digo | Descri��o\n");
    printf ("   3   | �timo\n");
    printf ("   2   | Bom\n");
    printf ("   1   | Regular\n\n");
    printf ("Informe a sua idade e a sua opini�o sobre o filme abaixo\n\n");

    for (a = 1; a <= 15; a++) {

    do {
        printf ("Informe a idade do %d� espectadaor: ", a);
        scanf ("%d", &idade);
        printf ("Informe o n�vel de satisfa��o: ");
        scanf ("%d", &opiniao);

// Acumulando as respostas "�timo" e "Regular"

        if (opiniao == 1) {
            Regular_Quant++; }

        if (opiniao == 2) {
            Bom_opiniao++; }

// Acumulando as idades e o total de respostas "Bom", e a quantidade total de entrevistados

        if (opiniao == 3) {
            Otimo_idade += idade;
            Quant_otimo++; } 

        Quantidade_Total++;

        if (idade <= 0 || opiniao < 1 || opiniao > 3) {
            printf ("\nDado inv�lido! Insira novamente...\n\n"); }

    } while (idade <= 0 || opiniao < 1 || opiniao > 3); 
}

// Calculando a m�dias de idades de "�timo" e o percentual de "Bom"

        media = (float) Otimo_idade / (float) Quant_otimo; 
        percentual = ((float) Bom_opiniao / (float) Quantidade_Total) * (float) 100; 

// Tela de resultado

    printf ("M�dia das idades das pessoas que responderam �timo: %.0f\n", media);
    printf ("Quantidade de pessoas que respondeu regular: %d\n", Regular_Quant);
    printf ("Percentual de pessoas que respondeu bom: %.2f%%\n", percentual);

    return 0;
}