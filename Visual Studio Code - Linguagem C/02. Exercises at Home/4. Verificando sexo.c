#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "");

// Declara��o de vari�veis

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
    
// Convertendo de min�scula para mai�scula e limpando o terminal

if (sexo == 'f') {
    sexo = 'F'; }

if (sexo == 'm') {
    sexo = 'M'; }

system ("cls || clear");

// Tela de resultado

    printf ("Nome do usu�rio: %s \n", nome);
    printf ("Idade do usu�rio: %d \n", idade);

// Verificando o sexo

if (sexo == 'F') {
    printf ("Sexo informado: Feminino");

} else { if (sexo == 'M') {
    printf ("Sexo informado: Masculno"); }
else {
    printf ("Sexo informado � inv�lido"); }

}
 
    return 0;
}