/* 
Descri��o  : Criar que ler a idade, nome, nome da mat�ria e 2 notas de 3 alunos. No final, imprimir os dados e, 
por meio de fun��es, retornar a m�dia e retornar a classifica��o da m�dia -> 1 - Entre 0 e 4: 'E'; 2 - Entre 4,1 e 6: 'D'; 
3 - Entre 6,1 e 7,5: 'C'; 4 - Entre 7,6 e 9: 'B'; M�dia 10: 'A'! (fun��o)
Autor(a)   : Gabriel S. Olavo
Data atual : 11/12/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

// Declara��o de constantes, struct e fun��es

#define MAX_CHARACTER 250
#define MAX_NOTE 2
#define MAX_DATA 3

struct escola {
    int idade;
    char nome[MAX_CHARACTER];
    char disciplina[MAX_CHARACTER];
    float nota[MAX_NOTE];
    float media_Estudantil;
};

void titulo ( ) {
    system ("cls || clear");
    printf ("INSTITUTO DE ENSINO HOLMES! Boletim Online da Turma B-5\n\n");
}

float mediaFinal (float numero[]) {
    int i;
    float soma = 0, media;

    for (i = 0; i < MAX_NOTE; i++) {
        soma += numero[i];
    }
    return media = soma / (float) MAX_NOTE;
}

char* conceito (float valor) {
    char classe[MAX_CHARACTER];

    if (valor >= 0 && valor <= 4.0) {
        strcpy (classe, "classe E");

    } else if (valor >= 4.1 && valor <= 6.0) {
        strcpy (classe, "classe D!");
    
    }  else if (valor >= 6.1 && valor <= 7.5) {
        strcpy (classe, "classe C!");
    
    }  else if (valor >= 7.6 && valor <= 9.0) {
        strcpy (classe, "classe B!");
    
    } else {
        strcpy (classe, "classe A!"); }
    
    return classe;
}

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declara��o de vari�veis

    int a, b;
    struct escola estudante[MAX_DATA];

// Solicitando dados

    titulo ( );
    for (a = 0; a < MAX_DATA; a++) {
        printf ("Digite o nome do %d� estudante: ", a+1);
        gets (estudante[a].nome);
        printf ("Digite a idade do estudante: ");
        scanf ("%d", &estudante[a].idade);
        fflush (stdin);
        printf ("Digite o nome da disciplina: ");
        gets (estudante[a].disciplina);

        for (b = 0; b < MAX_NOTE; b++) {
            printf ("Digite a %d� nota: ", b+1);
            scanf ("%f", &estudante[a].nota[b]);
        }
        fflush (stdin);
        printf ("\n");
    
        estudante[a].media_Estudantil = mediaFinal(estudante[a].nota);
    }

// Tela de resultado

    titulo ( );
    for (a = 0; a < MAX_DATA; a++) {
        printf ("Nome do %d� estudante: %s\n\n", a+1, estudante[a].nome);
        printf ("Idade do estudante: %d\n", estudante[a].idade);
        printf ("Nome da disciplina: %s\n", estudante[a].disciplina);

        for (b = 0; b < MAX_NOTE; b++) {
            printf ("%d� nota: %.2f\n", b+1, estudante[a].nota[b]);
        }
        printf ("M�dia: %.2f\n", estudante[a].media_Estudantil);
        printf ("Classifica��o da m�dia: %s\n\n", conceito (estudante[a].media_Estudantil));
    }

    return 0;
}