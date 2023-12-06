#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main () {
    setlocale (LC_ALL, "portuguese");

// Declarando vari?veis

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
    printf ("Informe a 1? nota: ");
    scanf ("%f", &primeiranota);
    printf ("Informe a 2? nota: ");
    scanf ("%f", &segundanota);
    printf ("Informe a 3? nota: ");
    scanf ("%f", &terceiranota);

// Limpando terminal e calculando a m?dia

system ("cls || clear");
media = (primeiranota + segundanota + terceiranota) / 3;

// Tela de resultado

    printf ("Nome do aluno: %s \n", nome);
    printf ("Idade do aluno: %d \n", idade);
    printf ("1? nota do aluno: %.2f \n", primeiranota);
    printf ("2? nota do aluno: %.2f \n", segundanota);
    printf ("3? nota do aluno: %.2f \n", terceiranota);
    printf ("M?dia final do aluno: %.2f \n\n", media);

// Valida??o

if (media < 7) {
    strcpy (situacao, "Reprovado!");
} else {
    strcpy (situacao, "Aprovado!");
}

return 0;
}