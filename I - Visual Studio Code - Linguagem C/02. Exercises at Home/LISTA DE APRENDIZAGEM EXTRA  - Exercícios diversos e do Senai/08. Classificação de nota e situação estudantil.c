/* 
Descrição  : Aplicar a classificação da média de notas do aluno e analisar sua aprovação ou reprovação! (função)
Autor(a)   : Gabriel S. Olavo
Data atual : 04/10/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "portuguese");
    
// Declaração de variáveis

    float primeiraNota, segundaNota, media;
    char conceito [250];
    char situacao [250];

// Solicitando dados

    printf ("BOLETIM ESTUDANTIL ONLINE! \n\n");
    printf ("Insira os seus dados e conculte a sua atual situação estudantil \n\n");
    printf ("Informe a 1º nota: ");
    scanf ("%f", &primeiraNota);
    printf ("Informe a 2º nota: ");
    scanf ("%f", &segundaNota);

// Calculando média e limpando terminal

media = (primeiraNota + segundaNota) / 2;
system ("cls");

// Aplicando conceito de nota através da média

if (media > 9 && media <= 10) {
    strcpy (conceito, "Nota A");
    strcpy (situacao, "Aprovado!");

} else if (media > 7.5 && media <= 9) {
    strcpy (conceito, "Nota B");
    strcpy (situacao, "Aprovado!");
    
} else if (media > 6 && media <= 7.5) {
    strcpy (conceito, "Nota C"); 
    strcpy (situacao, "Aprovado!");
    

} else if (media > 4 && media <= 6) {
    strcpy (conceito, "Nota D"); 
    strcpy (situacao, "Rerovado!");

} else if (media > 0 && media <= 4) {
    strcpy (conceito, "Nota E"); 
    strcpy (situacao, "Rerovado!"); } 

// Tela de resultado

    printf ("BOLETIM ESTUDANTIL ONLINE! Resumo da Consulta. \n\n");
    printf ("Primeira nota: %.2f \n", primeiraNota);
    printf ("Segunda nota: %.2f \n", segundaNota);
    printf ("Média final: %.2f \n\n", media);
    printf ("Classificação da nota: %s \n", conceito);
    printf ("Situação final: %s", situacao);

    return 0;
}
