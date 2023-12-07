/* 
Descrição  : Ler duas notas e imprimir a situação escolar do aluno: 1 - Média igual a 10: "Aprovado com Honra!"; 2 - Média entre 7 e 9,99: 
"Aprovado!"; 3 - Média abaixo de 7: "Reprovado!". Use struct para armazenar as variáveis! (função)
Autor(a)   : Gabriel S. Olavo
Data atual : 07/12/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

// Declaração de struct e constante

#define G 2

struct aprovacao {
    char situacao [250];
    float soma, media, notas[G];
}; 

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis comuns e de acesso

    int a;
    struct aprovacao estudante;

// Solicitando dados

    printf ("COLÉGIO JOHN GREEN! Boletim Online da Turma B1\n\n");
    for (a = 0; a < G; a++) {
        do {
            printf ("Informe a %dª nota: ", a+1);
            scanf ("%f", &estudante.notas[a]);

            if (estudante.notas[a] < 0 || estudante.notas[a] > 10) {
                printf ("\nNOTA INVÁLIDA! Por favor, digite uma nota entre 0 e 10\n\n"); }

        } while (estudante.notas[a] < 0 || estudante.notas[a] > 10);

// Calculando a média

        estudante.soma += estudante.notas[a];
        estudante.media = estudante.soma / G;

// Aplicando a situação escolar

        if (estudante.media == 10) {
            strcpy (estudante.situacao, "Aprovado com Honra!");
        
        } else if (estudante.media >= 7 && estudante.media <= 9.99) {
            strcpy (estudante.situacao, "Aprovado!");

        } else {
            strcpy (estudante.situacao, "Reprovado!"); }
    }

// Tela de resultado

system ("cls || clear");

    printf ("COLÉGIO JOHN GREEN! Boletim Online da Turma B1 - Conclusão dos Dados\n\n");
    for (a = 0; a < G; a++) {
        printf ("%dª nota: %.2f\n", a+1, estudante.notas[a]);
    }

    printf ("Média final: %.2f\n", estudante.media);
    printf ("Situação estudantil: %s\n", estudante.situacao);

    return 0;
}
