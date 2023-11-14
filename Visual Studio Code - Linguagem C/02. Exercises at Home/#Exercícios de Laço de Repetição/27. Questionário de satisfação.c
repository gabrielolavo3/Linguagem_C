/* 
Descrição  : Realizar uma pesquisa de satisfação de cinema e imprimir a média das idades das pessoas que responderam ótimo,
quantidade de pessoas que respondeu regular e percentual de pessoas que respondeu bom. Usar 3 - ótimo, 2 - bom e 1 - regular! (função)
Professor  : Carlos Anderson Santos de Jesus
Autor(a)   : Gabriel S. Olavo
Data atual : 13/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

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

    printf ("CINEMA ANALÓGICO - Questionário de satisfação\n\n");
    printf ("Nível | Descrição\n");
    printf ("  3   | Ótimo\n");
    printf ("  2   | Bom\n");
    printf ("  1   | Regular\n\n");
    printf ("Informe a sua idade e a sua opinião sobre o filme abaixo\n\n");

    for (a = 1; a <= 15; a++) {

    do {
        printf ("Informe a idade do %dª espectador: ", a);
        scanf ("%d", &idade);
        printf ("Informe o nível de satisfação: ");
        scanf ("%d", &opiniao);
        printf ("\n");

// Acumulando as respostas "Ótimo" e "Regular"

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
            printf ("\nDado inválido! Insira novamente...\n\n"); }

    } while (idade <= 0 || opiniao < 1 || opiniao > 3); 
}

// Calculando a médias de idades de "Ótimo" e o percentual de "Bom"

        media = (float) Otimo_idade / (float) Quant_otimo; 
        percentual = ((float) Bom_opiniao / (float) Quantidade_Total) * (float) 100; 

// Tela de resultado

    system ("cls");

    printf ("CINEMA ANALÓGICO\nResumo do Questionário\n\n");
    printf ("Média das idades das pessoas que responderam ótimo: %.0f\n", media);
    printf ("Quantidade de pessoas que respondeu regular: %d\n", Regular_Quant);
    printf ("Percentual de pessoas que respondeu bom: %.2f%%\n", percentual);

    return 0;
}
