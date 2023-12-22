#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define MAX_NOTE 3

float media_final (float valor[]) {
    int a;
    float soma = 0;
    
    for (a = 0; a < MAX_NOTE; a++) {
        soma += valor[a];
    }
    
    return soma / (float) MAX_NOTE;
}

char* resultado (float media) {
    char situacao[250];
    
    if (media >= 7) {
        return strcpy (situacao, "Aprovado!");
    
    } else if (media >= 5 && media <= 6.9) {
        return strcpy (situacao, "Recuperação!");
    
    } else {
        return strcpy (situacao, "Reprovado!");
    }
    
    //return situacao;
}

int main ( ) {
    setlocale (LC_ALL, "portuguese");
    
    int a;
    float nota[MAX_NOTE], media;
    
    for (a = 0; a < MAX_NOTE; a++) {
        
        do {
            printf ("Digite a %dª nota: ", a+1);
            scanf ("%f", &nota[a]);
            
            if (nota[a] < 0 || nota[a] > 10) {
                printf ("\nNota Inválida! Informe a nota entre 0  e 10\n\n");
            }
            
        } while (nota[a] < 0 || nota[a] > 10);
        
        media = media_final(nota);
    }
    
    for (a = 0; a < MAX_NOTE; a++) {
        printf ("%dª nota: %.2f\n", a+1, nota[a]);
    }
    printf ("Média do estudante: %.2f\n", media);
    printf ("Situação estudantil: %s\n", resultado(media));
    
    return 0;
}
