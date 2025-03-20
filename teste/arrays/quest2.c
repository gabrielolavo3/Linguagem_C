/* 
Descrição  : Com vetor e matriz, ler o nome de 5 alunos, suas idades e 3 nota de cada. Ao final, mostra todos os dados dos alunos e a média.
Também imprimir a situação escolar do aluno: 1 - média igual ou maior que 7: aprovado; 2 - média menor que 7,0 e maior ou igual a 5,0: recuperação; 
3 - média menor que 5,0: reprovado! (função)
Professor  : Carlos Anderson Santos de Jesus 
Autor(a)   : Gabriel S. Olavo
Data atual : 28/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

// Declaração de constante

#define z 5

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    int a, b;
    int idade[z];
    float notas[z][z], soma = 0, media[z];
    char nome[z][250], resultado[z][250];

// Solicitando dados

    printf ("COLÉGIO TREVOR MONTBLANC! Boletim Online da Turma B5\n\n");
    for (a = 0; a < z; a++) {
        printf ("Informe o nome do %dº aluno: ", a+1);
        gets (nome[a]);

        do {
            printf ("Informe a idade: ");
            scanf ("%d", &idade[a]);

            if (idade[a] <= 0 || idade[a] >= 95) {
                printf ("\nIDADE INVÁLIDA! O Colégio Trevor Montblanc aceita alunos com idade de 1 a 95 anos\n\n"); }

        } while (idade[a] <= 0 || idade[a] >= 95);

        for (b = 0; b < z; b++) {
            do {
                printf ("Digite a %dª nota: ", b+1);
                scanf ("%f", &notas[a][b]);

                if (notas[a][b] < 0 || notas[a][b] > 10) {
                    printf ("\nNOTA INVÁLIDA! Informe a nota entre 0 e 10\n\n"); }

            } while (notas[a][b] < 0 || notas[a][b] > 10);
            
            soma += notas[a][b]; 
        }

// Calculando a média das notas

        printf ("\n");
        media[a] = soma / b;
        soma = 0;
        fflush (stdin);

// Aplicando a situação estudantil de acordo com a média

        if (media[a] >= 7) {
            strcpy (resultado[a], "Aprovado!");
        
        }  else if (media[a] >= 5 && media[a] < 7) {
            strcpy (resultado[a], "Recuperação!");
    
        } else {
            strcpy (resultado[a], "Reprovado!"); }
    }
  
// Tela de resultado

system ("cls || clear");

    printf ("COLÉGIO TREVOR MONTBLANC!\nDados Gerais da Turma B5\n\n");
    for (a = 0; a < z; a++) {
        printf ("Nome do aluno: %s\n", nome[a]);
        printf ("Idade do aluno: %d\n", idade[a]);

        for (b = 0; b < z; b++) {
            printf ("%dª nota: %.2f\n", b+1, notas[a][b]); 
        }
        
        printf ("Média: %.2f\n", media[a]);
        printf ("Situação estudantil: %s\n", resultado[a]);
        printf ("\n");
    }

    return 0;
}
