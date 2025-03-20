/* 
Descrição  : Criar que ler a idade, nome, nome da matéria e 2 notas de 3 alunos. No final, imprimir os dados e, 
por meio de funções, retornar a média e retornar a classificação da média -> 1 - Entre 0 e 4: 'E'; 2 - Entre 4,1 e 6: 'D'; 
3 - Entre 6,1 e 7,5: 'C'; 4 - Entre 7,6 e 9: 'B'; Média 10: 'A'! (função)
Autor(a)   : Gabriel S. Olavo
Data atual : 11/12/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

// Declaração de constantes, struct e funções

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

// Declaração de variáveis

    int a, b;
    struct escola estudante[MAX_DATA];

// Solicitando dados

    titulo ( );
    for (a = 0; a < MAX_DATA; a++) {
        printf ("Digite o nome do %dº estudante: ", a+1);
        gets (estudante[a].nome);
        
        do {
            printf ("Digite a idade do estudante: ");
            scanf ("%d", &estudante[a].idade);

            if (estudante[a].idade <= 0 || estudante[a].idade > 95) {
                printf ("\nIDADE INVÁLIDA! Por favor, informe a idade entre 1 e 95 anos\n\n"); }

        } while (estudante[a].idade <= 0 || estudante[a].idade > 95);

        fflush (stdin);
        printf ("Digite o nome da disciplina: ");
        gets (estudante[a].disciplina);

        for (b = 0; b < MAX_NOTE; b++) {
            do {
                printf ("Digite a %dª nota: ", b+1);
                scanf ("%f", &estudante[a].nota[b]);

                if (estudante[a].nota[b] < 0 || estudante[a].nota[b] > 10) {
                    printf ("\nNOTA INVÁLIDA! Por favor, informe uma nota entre 0 e 10\n\n"); }

            } while (estudante[a].nota[b] < 0 || estudante[a].nota[b] > 10);
        }
        fflush (stdin);
        printf ("\n");
    
        estudante[a].media_Estudantil = mediaFinal(estudante[a].nota);
    }

// Tela de resultado

    titulo ( );
    for (a = 0; a < MAX_DATA; a++) {
        printf ("Nome do %dº estudante: %s\n\n", a+1, estudante[a].nome);
        printf ("Idade do estudante: %d\n", estudante[a].idade);
        printf ("Nome da disciplina: %s\n", estudante[a].disciplina);

        for (b = 0; b < MAX_NOTE; b++) {
            printf ("%dª nota: %.2f\n", b+1, estudante[a].nota[b]);
        }
        printf ("Média: %.2f\n", estudante[a].media_Estudantil);
        printf ("Classificação da média: %s\n\n", conceito (estudante[a].media_Estudantil));
    }

    return 0;
}
