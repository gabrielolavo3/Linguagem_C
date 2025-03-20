#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis
    
    int idade;

// Solicitando dados

    printf ("Informe a sua idade: ");
    scanf ("%d", &idade);

system ("cls || clear");

// Tela de resultado

    printf ("VERIFICAÇÃO DE OBRIGATORIEDADE DE VOTO!\n\n");
    printf ("Idade informada: %d", idade);

// Verificando obrigatoriedade do voto

    if (idade >= 18 && idade <= 65) {
        printf ("\nResultado Final: Seu voto é obrigatório");
    } else {
        printf ("\nResultado Final: Seu voto é facultativo");
    }

    return 0;
}
