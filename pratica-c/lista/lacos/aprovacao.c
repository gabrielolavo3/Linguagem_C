/* 
Descrição  : Ler 3 notas de um aluno, a quantidade de dias de aulas frequentados e calcular a média de notas.
Caso a média seja maior ou igual 6 e haja mais de 40% de presença, estará aprovado, senão, é reprovado! (função)
Autor(a)   : Gabriel S. Olavo
Data atual : 15/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    int a, b = 3;
    float frequencia;
    float media, percentual_de_Presenca;
    float notas[b], soma = 0;
    char situacao_Estudantil [250];

// Solicitando dados

    printf ("COLÉGIO GABRIEL BELMONT BLACK\nVerifique a sua situção estudantil ao inserir os dados solicitados\n\n");

    for (a = 0; a < b; a++) {
        do {
            printf ("Digite a %dº nota: ",a+1);
            scanf ("%f", &notas[a]);

            if (notas[a] < 0 || notas[a] > 10) {
                printf ("\nNota inválida! Informe um número entre 0 ou 10\n\n"); }

        } while (notas[a] < 0 || notas[a] > 10);

// Somando as notas e calculando a média

        soma += notas[a]; }
        media = soma / b;

// Lendo, validando e calculando a frequência final do aluno

    do {
        printf ("Informe a quantidade de aulas que frequentou: ");
        scanf ("%f", &frequencia);

        if (frequencia < 0 || frequencia > 100) {
            printf ("\nQuantidade inválida! Informe um número para a frequência entre 0 e 100\n\n"); }

    } while (frequencia < 0 || frequencia > 100);

    percentual_de_Presenca = (frequencia / 100) * 100;

// Aplicando situação estudantil final

    if (media >= 6 && percentual_de_Presenca >= 40) {
        strcpy (situacao_Estudantil, "Aluno(a) aprovado(a)! PARABÉNS");
    
    } else {
        strcpy (situacao_Estudantil, "Aluno(a) reprovado(a)!"); }

// Tela de resultado

system ("cls");

    printf ("COLÉGIO GABRIEL BELMONT BLACK\n\n");
    for (a = 0; a < b; a++) {
        printf ("%dª nota: %.2f\n", a+1, notas[a]); }
        printf ("Dias de comparecimento em aula: %.0f\n", frequencia);
        printf ("Média final: %.2f\n", media);
        printf ("Percentual final de frequência: %.2f%%\n\n", percentual_de_Presenca);
        printf ("Situação estudantil: %s", situacao_Estudantil);

    return 0;
}