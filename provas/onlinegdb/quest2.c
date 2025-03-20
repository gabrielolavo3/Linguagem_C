/* 
Descrição  : Em uma struct, armazenar variáveis para ler o nome e 4 notas de 3 alunos. No final, imprimir a média. Caso a média seja maior ou igual a 7, imprimir a "Aprovado"; caso seja menor
imprimir "Reprovado". E caso a nota seja menor que 0 ou maior do que 10, repetir a pergunta! (função)
Professor  : Carlos Anderson Santos de Jesus
Autor(a)   : Gabriel S. Olavo
Data atual : 14/12/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

// Declaração de constante, struct e função

#define G 4
#define A 3

struct estudante {
  char nome[250];
  float nota[G];
  float media;
};

void titulo ( )  {
    system ("cls || clear");
    printf ("CÓLEGIO VINCENT BELMONT\n\n");
}

float mediaFinal (float nota[]) {
    int a;
    float soma = 0;
    
    for (a = 0; a < G; a++) {
        soma += nota[a];
    }
    return soma / (float) G;
}

void aprovacao (float valor) {
    
    if (valor >= 7) {
        printf ("Situação estudantil: Aprovado!");
    
    } else if (valor >= 5.0 && valor <= 6.9) {
        printf ("Situação estudantil: Recuperação");
    
    } else {
        printf ("Situação estudantil: Reprovado");
    }
}

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    int a, b;
    struct estudante aluno[A];
 
 // Solicitando dados  
    
    titulo ( );
    for (a = 0; a < A; a++) {
        printf ("Digite o nome do %dº estudante ", a+1);
        gets (aluno[a].nome);
        
        printf ("\n");
        for (b = 0; b < G; b++) {
            
            do {
                printf ("Digite a %dª nota: ", b+1);
                scanf ("%f", &aluno[a].nota[b]);
                
                if (aluno[a].nota[b] < 0 || aluno[a].nota[b] > 10) {
                    printf ("\nNOTA INVÁLIDA! Informe a nota entre 0 e 10\n\n"); }
                
            } while (aluno[a].nota[b] < 0 || aluno[a].nota[b] > 10);
        }
        setbuf(stdin, 0);
        printf ("\n");
        
        aluno[a].media = mediaFinal(aluno[a].nota);
    }
    
// Tela de resultado

    titulo ( );
    for (a = 0; a < A; a++) {
        printf ("Nome do %dº estudante: %s\n", a+1, aluno[a].nome);
        
        for (b = 0; b < G; b++) {
            printf ("%dª nota: %.2f\n", b+1, aluno[a].nota[b]);
        }
        printf ("\n");
        printf ("Media: %.2f\n", aluno[a].media);
        aprovacao(aluno[a].media);
        printf ("\n\n");
    }
    
    return 0;
}