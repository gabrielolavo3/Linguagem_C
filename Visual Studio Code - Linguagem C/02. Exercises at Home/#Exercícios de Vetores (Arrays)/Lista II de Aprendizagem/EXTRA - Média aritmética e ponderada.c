#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "");

// Declaração de variáveis

    int a;
    int menu, peso, soma_Peso = 0;
    char resposta;
    float notas, media, soma_Nota = 0;

// Solicitando dados

    do {
        printf ("VIRTUAL BOX - CALCULADORA ONLINE! Saiba sua nota com a média simples ou ponderada\n\n");
        printf ("Código | Descrição\n");
        printf ("   1   | Calcular média aritmética simples\n");
        printf ("   2   | Calcular média aritmética ponderada\n");
        printf ("   3   | Encerrar software\n\n");
        printf ("Selecione a opção desejada: ");
        scanf ("%d", &menu);

        switch (menu) {
        case 1:
        system ("cls || clear");

        printf ("VIRTUAL BOX - CALCULADORA ONLINE!\n\n");
            for (a = 1; a <= 2; a++) {
                printf ("Informe a %dª nota: ", a);
                scanf ("%f", &notas);

            soma_Nota += notas; }

// Calculando a média aritmética simples

            media = soma_Nota / a;

// Tela de resultado I

        system ("cls || clear");
        printf ("VIRTUAL BOX - Conclusão!\n\n");
        printf ("Média final: %.2f", media);
            break;

        case 2:
        system ("cls || clear");

        printf ("VIRTUAL BOX - CALCULADORA ONLINE!\n\n");
            for (a = 1; a <= 3; a++) {
                printf ("Informe a %dª nota: ", a);
                scanf ("%f", &notas);
                printf ("Informe o peso da nota: ");
                scanf ("%d", &peso);
                printf ("\n");

            soma_Nota += notas * peso; 
            soma_Peso += peso; }

// Calculando a média aritmética ponderada

            media = soma_Nota / soma_Peso;

// Tela de resultado II
            
        system ("cls || clear");
        
        printf ("VIRTUAL BOX - CALCULADORA ONLINE!\n\n");
        printf ("Média final: %.2f", media);
            break;

        case 3:
            printf ("Encerrando sessão...");
            sleep (2);
            break;
    
        default:
            break;
        }

    } while (menu != 3);

    return 0;
}