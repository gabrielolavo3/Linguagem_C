#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Declaração de struct

struct informacao_escolar {
  char nome[250];
  int idade;
  float notas[2]; 
  float soma = 0;
  float media[2];
};

int main ( ) {
    setlocale (LC_ALL, "");

// Declaração de variáveis
    
    int a, b;
    struct informacao_escolar aluno[3];

// Solicitando dados

    for (a = 0; a < 3; a++) {
        
        printf ("Informe o nome da %dª pessoa: ", a+1);
        gets (aluno[a].nome);
        printf ("Informe a idade: ");
        scanf ("%d", &aluno[a].idade);
        
        for (b = 0; b < 2; b++) {
            printf ("Informe a %dª nota: ", b+1);
            scanf ("%f", &aluno[a].notas[b]);
            
            aluno[a].soma += aluno[a].notas[b];
        }
            aluno[a].media = aluno[a].soma / 2;
            aluno[a].soma = 0; 
            
        printf ("\n");
        setbuf (stdin, 0);
    }

// Tela de resultado

system ("cls || clear");

    for (a = 0; a < 3; a++) {
        printf ("Nome do %dº aluno: %s\n", a+1, aluno[a].nome);
        printf ("Idade do aluno: %d\n", aluno[a].idade);
        
        for (b = 0; b < 2; b++) {
            printf ("%dª nota: %.2f\n", b+1, aluno[a].notas[b]);
        }
        printf ("Média final: %.2f\n", aluno[a].media);
    }
    
    return 0;
}
