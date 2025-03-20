/* 
Descrção  : Ler diversos votos de uma campanha eleitoral e imprimir: 1 - A quantidade de votos de cada candidato;
2 - A quantidade de votos nulos e brancos; 3 - Porcentagem dos votos brancos e nulos com relação ao total de votos ! (função)
Autor(a)   : Gabriel S. Olavo
Data atual : 19/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "");

// Declaração de variáveis

    int a = 0, b = 0;
    int voto;
    int votoNulo = 0, voto_em_Branco = 0;
    int vencedor = 0;
    int primeiro_Candidato = 0, segundo_Candidato = 0, terceiro_Candidato = 0, quarto_Candidato = 0;
    float porcentagem_Nulo, porcentagem_Branco;

// Solicitando dados

    printf ("ESTADO DE NIGHY CITY! ELEIÇÃO DE 2035\n\n");
    printf ("Número | Nome do(a) candidato(a)\n");
    printf ("   1   | MARK JOHNSON\n");
    printf ("   2   | ELIZABETH OLIVER\n");
    printf ("   3   | SERAFIN BROWN\n");
    printf ("   4   | ALEF CLINE\n\n");

    do {
        printf ("Informe o voto do %dº eleitor -\n(1 a 4 - Nº do candidato, 5 - Voto nulo, 6 - Voto em branco): ", a+1);
        scanf ("%d", &voto);
        printf ("\n");

// Evitando que o 0 seja contado nas operações

        if (voto > 0) {
        a++; }

// Acumulando o voto de cada candidato

        if (voto == 1) {
            primeiro_Candidato++;
        
        } else if (voto == 2) {
            segundo_Candidato++;
        
        } else if (voto == 3) {
            terceiro_Candidato++;

        } else if (voto == 4) {
            quarto_Candidato++; }

// Acumulando os votos nulos e brancos

        if (voto == 5) {
            votoNulo++; }
        
        if (voto == 6) {
            voto_em_Branco++; }
    
    } while (voto != 0);

// Calculando a porcentagem de votos nulos e brancos entre os votos totais

    porcentagem_Nulo = ((float)votoNulo / a) * 100;
    porcentagem_Branco = ((float)voto_em_Branco / a) * 100;

// Tela de resultado

system ("cls || clear");
    b++;
    printf ("ESTADO DE NIGHY CITY! ELEIÇÃO DE 2035\n\n");
    printf ("Votos do %dº candidato: %d\n", b, primeiro_Candidato);
    printf ("Votos do %dº candidato: %d\n", b+1, segundo_Candidato);
    printf ("Votos do %dº candidato: %d\n", b+2, terceiro_Candidato);
    printf ("Votos do %dº candidato: %d\n\n", b+3, quarto_Candidato);
    printf ("Total de votos nulos: %d\n", votoNulo);
    printf ("Total de votos em branco: %d\n\n", voto_em_Branco);
    printf ("Porcentagem de votos nulos: %.2f\n", porcentagem_Nulo);
    printf ("Porcentagem de votos em branco: %.2f\n", porcentagem_Branco);

    return 0;
}