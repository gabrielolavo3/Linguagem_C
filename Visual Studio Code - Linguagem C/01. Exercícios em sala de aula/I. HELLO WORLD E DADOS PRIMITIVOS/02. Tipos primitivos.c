#include <stdio.h>
#include <stdlib.h> 

int main () {
    
    // Declaração de variáveis

    int idade = 20; 
    float peso = 75.6; 
    char sexo = 'F'; 
    char nome [250] = "Marta"; 

    // Tela de resultado

    printf ("Idade: %d anos \n", idade); 
    printf ("Peso: %.2f Kg \n", peso); 
    printf ("Sexo: %c \n", sexo);  
    printf ("Nome: %s \n", nome); 

    return 0;
}
