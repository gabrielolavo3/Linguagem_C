#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");
    
    float valor, newPreco;
    int diaCompra;
    
    printf ("Insira o valor da compra: ");
    scanf ("%f", &valor);
    
    do {
        printf ("Insira o dia da compra (1 para Dia de Semana ou 2 para Fim de Semana): ");
        scanf ("%d", &diaCompra);
        
        switch (diaCompra) {
            case 1:
                if (valor <= 100) {
                    printf ("Valor da compra: %.2f\n", valor);
                
                } else {
                    printf ("Novo preço da compra: %.2f\n", newPreco = valor - (valor * 0.1)); }
            break;
            
            case 2:
                if (valor <= 100) {
                    printf ("Valor da compra: %.2f\n", valor);
                
                } else {
                    printf ("Novo preço da compra: %.2f\n", newPreco = valor - (valor * 0.15)); }
            break;
            
            default:
                printf ("\nOpção inválida!\n");
                sleep (1);
                system ("clear");
            break;
        }
    } while (diaCompra < 1 || diaCompra > 2);
    
    return 0;
}
