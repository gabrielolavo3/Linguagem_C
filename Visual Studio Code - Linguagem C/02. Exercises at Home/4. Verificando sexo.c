#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "");

// Declaração de variáveis

    char sexo;
    char nome [250];
    int idade;

// Solcitando dados

    printf ("Informe o seu nome: ");
    gets (nome);
    printf ("Informe a sua idade, %s: ", nome);
    scanf ("%d", &idade);

fflush (stdin);

    printf ("Informe a primeira letra do seu sexo: ");
    scanf ("%c", &sexo);
    
// Convertendo de minúscula para maiúscula e limpando o terminal

if (sexo == 'f') {
    sexo = 'F'; }

if (sexo == 'm') {
    sexo = 'M'; }

system ("cls || clear");

// Tela de resultado

    printf ("Nome do usuário: %s \n", nome);
    printf ("Idade do usuário: %d \n", idade);

// Verificando o sexo

if (sexo == 'F') {
    printf ("Sexo informado: Feminino");

} else { if (sexo == 'M') {
    printf ("Sexo informado: Masculno"); }
else {
    printf ("Sexo informado é inválido"); }

}
 
    return 0;
}