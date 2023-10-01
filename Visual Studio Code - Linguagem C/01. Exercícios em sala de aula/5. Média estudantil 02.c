#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main () {
    setlocale (LC_ALL, "portuguese");

// Declarando variáveis

    char nome [250];
    int idade;
    float primeiranota;
    float segundanota;
    float terceiranota;
    float media;
    char situacao [250];

// Coletando dados
    
    printf ("Informe o seu nome: ");
    gets (nome);
    printf ("Informe a sua idade, %s: ", nome);
    scanf ("%d", &idade);
    printf ("Informe a 1º nota: ");
    scanf ("%f", &primeiranota);
    printf ("Informe a 2º nota: ");
    scanf ("%f", &segundanota);
    printf ("Informe a 3º nota: ");
    scanf ("%f", &terceiranota);

// Limpando terminal e calculando a média

system ("cls || clear");
media = (primeiranota + segundanota + terceiranota) / 3;

// Tela de resultado

    printf ("Nome do aluno: %s \n", nome);
    printf ("Idade do aluno: %d \n", idade);
    printf ("1º nota do aluno: %.2f \n", primeiranota);
    printf ("2º nota do aluno: %.2f \n", segundanota);
    printf ("3º nota do aluno: %.2f \n", terceiranota);
    printf ("Média final do aluno: %.2f \n\n", media);

// Validação

if (media < 7) {
    strcpy (situacao, "Reprovado!");
} else {
    strcpy (situacao, "Aprovado!");
}

return 0;
}