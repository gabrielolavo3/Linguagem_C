#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Declaração de constante

#define c 4

int main() {
    setlocale(LC_ALL, "");

    // Declaração de variáveis

    int a, b;
    char nome[c][250];
    float notas[c][3];
    float soma = 0;
    float media[c];

    // Solicitando dados

    for (a = 0; a < c; a++) {
        printf("Digite o nome do %dº aluno: ", a + 1);
        gets(nome[a]);

        for (b = 0; b < 3; b++) {
            printf("Informe a %d nota do aluno: ", b + 1);
            scanf("%f", &notas[a][b]);
        
            soma += notas[a][b]; }

// Calculando a média

            media[a] = soma / b;
            soma = 0;
        
    //setbuf(stdin, 0);

        fflush(stdin);
        printf("\n"); }

// Tela de resultado

    for (a = 0; a < c; a++) {
        printf("Nome do %d aluno: %s\n", a + 1, nome[a]);

        for (b = 0; b < 3; b++) {
            printf("%d nota: %.2f\n", b + 1, notas[a][b]); }

        printf("Média do aluno: %.2f\n", media[a]);
        printf("\n");
    }

    return 0;
}