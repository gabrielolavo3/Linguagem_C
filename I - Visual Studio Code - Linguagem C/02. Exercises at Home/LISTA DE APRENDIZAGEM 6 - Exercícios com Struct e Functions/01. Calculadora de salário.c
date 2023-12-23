/* 
Descri��o  : Por meio de um menu, crie uma calculadora para sal�rio. Com uma struct, armazene as vari�veis necess�rias para ler os dados do usu�rio 
e, por meio passagem de par�metro, use fun��es para efetuar e retornar os c�lculos necess�rios. O menu deve ter op��es para novo sal�rio, sal�rio de f�rias, 
13� sal�rio e sair do programa. Na 1� op��o, o acr�scimo � de 15% para at� R$ 350; 10% de R$ 351 at� R$ 600; e acima de R$ 600, � 5%! (fun��o)
Autor(a)   : Gabriel S. Olavo
Data atual : 23/12/2023 */ 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <locale.h>

// Declara��o de fun��es e struct

struct dados_Trabalhista {
    int meses_Trabalhados;
    float salario, new_Salario, decimo_Terceiro;
    float salario_Ferias;  
};

void titulo ( ) {
    system ("cls || clear");
    printf ("SALARIUM IN BOX! CALCULADORA VIRTUAL DE SAL�RIOS\n\n");
}

void mensagem (struct dados_Trabalhista funcionario) {
    if (funcionario.meses_Trabalhados <= 0 || funcionario.meses_Trabalhados > 12) {
        printf ("\nQuantidade Inv�lida! Insira a quantidade entre 1 e 12\n\n"); }
}

void erroDe_Salario (struct dados_Trabalhista funcionario) {
    if (funcionario.salario < 1 || funcionario.salario > 80000) {
        printf ("\nValor Inv�lido! Insira o valor do sal�rio entre R$ 1,00 e R$ 80.000,00\n\n"); }
}

float Novo_salario (struct dados_Trabalhista funcionario) {
    
    if (funcionario.salario <= 350.00) {
        return funcionario.salario * 1.15;
        
    } else if (funcionario.salario >= 351.00 && funcionario.salario <= 600.00) {
        return funcionario.salario * 1.1;
        
    } else {
        return funcionario.salario * 1.05; }
}

char* porcentagem_Acrescimo (struct dados_Trabalhista funcionario) {
    char acrescimo[250];
    
    if (funcionario.salario <= 350.00) {
        return strcpy (acrescimo, "15%");
        
    } else if (funcionario.salario >= 351.00 && funcionario.salario <= 600.00) {
        return strcpy (acrescimo, "10%");
        
    } else {
        return strcpy (acrescimo, "05%"); }
}

float Decimo_Terceiro (struct dados_Trabalhista funcionario) {
    return (funcionario.salario * funcionario.meses_Trabalhados) / 12;
}

float ferias (struct dados_Trabalhista funcionario) {
    return (funcionario.salario / 3) + funcionario.salario;
}

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declara��o de vari�veis de acesso

    int menu;
    struct dados_Trabalhista funcionario;

// Solicitando dados e tela de resultado

    titulo ( );
    do {
        printf ("Identificador | Descri��o\n");
        printf ("      1       | Acr�scimo de sal�rio\n");
        printf ("      2       | Calculo do sal�rio de f�rias\n");
        printf ("      3       | Calculo do 13� sal�rio\n");
        printf ("      4       | Encerrar algoritmo\n\n");
        printf ("Selecione a op��o desejada de acordo com o identificador: ");
        scanf ("%d", &menu);
        
        switch (menu) {
            case 1:
                do {
                    printf ("\nDigite o valor do seu atual sal�rio(em R$): ");
                    scanf ("%f", &funcionario.salario);
                
                    erroDe_Salario (funcionario);
                        
                } while (funcionario.salario < 1 || funcionario.salario > 80000);
                
                titulo ( );
                printf ("Valor do atual salario: R$ %.2f\n", funcionario.salario);
                printf ("Percentual de acr�scimo: %s\n", porcentagem_Acrescimo(funcionario));
                printf ("Valor do novo salario: R$ %.2f\n\n", funcionario.new_Salario = Novo_salario(funcionario));
            break;
            
            case 2:
                do {
                    printf ("\nDigite o valor do seu atual sal�rio(em R$): ");
                    scanf ("%f", &funcionario.salario);
                    
                    erroDe_Salario (funcionario);
                    
                } while (funcionario.salario < 1 || funcionario.salario > 80000);
                
                titulo ( );
                printf ("Sal�rio do per�odo de f�rias: R$ %.2f\n\n", funcionario.salario_Ferias = ferias(funcionario));
            
            break;
            
            case 3:
                do {
                    printf ("\nDigite o valor do seu atual sal�rio(em R$): ");
                    scanf ("%f", &funcionario.salario);
                    
                    erroDe_Salario (funcionario);
                    
                } while (funcionario.salario < 1 || funcionario.salario > 80000);

                do {
                    printf ("Digite a quantidade de meses no qual voc� trabalhou: ");
                    scanf ("%d", &funcionario.meses_Trabalhados);
                    
                    mensagem (funcionario);
                    
                } while (funcionario.meses_Trabalhados <= 0 || funcionario.meses_Trabalhados > 12);

                titulo ( );
                printf ("Valor do atual salario: R$ %.2f\n", funcionario.salario);
                printf ("Quantidade de meses de servi�o: %d\n", funcionario.meses_Trabalhados);
                printf ("Valor do 13� sal�rio: R$ %.2f\n\n", funcionario.decimo_Terceiro = Decimo_Terceiro(funcionario));
            break;
            
            case 4:
                printf ("\nOBRIGADO POR UTILIZAR O SALARIUM IN BOX! At� a pr�xima\n");
            break;
            
            default:
                printf ("\nOp��o Inv�lida! Retorne ao menu e selecione uma op��o dispon�vel\n");
                sleep (2);
                titulo ( );
            break;
        }
    } while (menu != 4);
    
    return 0;
}