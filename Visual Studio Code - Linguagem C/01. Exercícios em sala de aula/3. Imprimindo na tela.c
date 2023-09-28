#include <stdio.h>
#include <stdlib.h>

int main () {
    int idade = 23;
    char  nome [250] = "Marta";
    float altura = 1.68;
    char sobrenome [250] = "Santos";

    // Tela de resultado

    printf ("Nome: %s \n", nome);
    printf ("Idade: %d \n", idade);
    printf ("Altura de Marta: %.2f \n", altura);
    printf ("Sobrenome de Marta: %s \n", sobrenome);

    return 0;
}