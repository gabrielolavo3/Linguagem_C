/* 
Descrição  : Ler a idade, peso e altura de 25 pessoas. Imprimir a quantidade de pessoas 50+; a média
de altura de pessoas entre 10 e 20 anos; percentual de pessoas -40 Kg entre todas as pessoas analisadas! (função)
Autor(a)   : Gabriel S. Olavo
Data atual : 04/11/2023 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL,"portuguese");

// Declaração de variáveis

    int a = 0, idade, acima_de_50 = 0, idade10_20 = 0;
    float peso, altura, idade_E_altura = 0, media, percentual, menos_40Kg = 0;

// Solicitando dados

    printf ("INSTITUTO DE ESTATÍSTICA NACIONAL\n\n");

for (a = 1; a <= 10; a++) {
    printf ("Dados do %dº entrevistado\n", a);
    printf ("Digite a idade: ");
    scanf ("%d", &idade);
    printf ("Digite o peso (em Kg): ");
    scanf ("%f", &peso);
    printf ("Digite a altura (em Metros): ");
    scanf ("%f", &altura); 
    printf ("\n");

// Acumulando idades acima de 50 anos e idades entre 10 e 20 anos, com suas alturas
        
    if (idade > 50) {
        acima_de_50++; } 

    if (idade >= 10 && idade <= 20) {
        idade10_20++; 
        idade_E_altura += altura; }

// Somando o número de pessoas com peso abaixo de 40 Kg

    if (peso < 40) {
        menos_40Kg++; }
}

// Calculando a média de alturas das pessoas com idade entre 10 e 20 e o percentual de pessoas abaixo de 40Kg

    if (idade_E_altura > 0) {
        media = idade_E_altura / idade10_20; }
        
    percentual = (menos_40Kg / a) * 100; 

// Tela de resultado

system ("cls");

    printf ("INSTITUTO DE ESTATÍSTICA NACIONAL\nDados da cidade Frankenstein\n\n");
    printf ("Total de pessoas com idade acima de 50 anos: %d\n", acima_de_50);
    printf ("Média de altura de pessoas com idade entre 10 e 20 anos: %.2f metros\n", media);
    printf ("Total percentual de pessoas com peso abaixo de 40 Kilos: %.2f\n", percentual);

    return 0;

}