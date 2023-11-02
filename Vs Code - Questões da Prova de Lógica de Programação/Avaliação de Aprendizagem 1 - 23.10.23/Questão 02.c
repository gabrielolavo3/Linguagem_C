/* 
Descri��o  : Ler o nome, sexo e ano de nascimento para se inscrever em um curso. Com base na idade, �queles
a partir de 18 ano ter�o os dados impressos na tela, confirmando a inscri��o; quem tiver menos, imprimir a mensagem:
"N�o � poss�vel realizar o cadastro, o (a) candidato (a) deve ter 18 anos ou mais."! (fun��o)
Professor  : Carlos Anderson Santos de Jesus
Autor(a)   : Gabriel S. Olavo
Data atual : 02/11/2023 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declara��o de vari�veis

    char nome [250];
    char sexo;
    int anodeNascimento;
    int idade;

// Solicitando dados

    printf ("SERVI�O NACIONAL DE APRENDIZAGEM COMERCIAL (Senac)\nRealize sua inscri��o no curso de DS\n\n");
    printf ("Informe o seu nome: ");
    fgets (nome, 250, stdin);
    nome [strcspn (nome, "\n")] = 0;
    printf ("Informe o seu sexo (Use M para masculino ou F para feminino): ");
    scanf ("%c", &sexo);
    printf ("Informe o seu ano de nascimento: ");
    scanf ("%d", &anodeNascimento);

    sexo = toupper(sexo);

// Calculando a idade

    idade = 2023 - anodeNascimento;

    if (idade >= 18) {
    
    system ("cls");
        printf ("SERVI�O NACIONAL DE APRENDIZAGEM COMERCIAL (Senac)\nDados Coletados\n\n");
        printf ("Nome do inscrito: %s\n", nome);
        printf ("Sexo do inscrito: %c\n", sexo);
        printf ("Idade atual ou aproximada do inscrito: %d\n\n", idade);
        printf ("OBRIGADO! Inscri��o realizada com sucesso!");

    } else {
        printf ("\n\nN�o � poss�vel realizar o cadastro, o (a) candidato (a) deve ter 18 anos ou mais."); }

    return 0;
}