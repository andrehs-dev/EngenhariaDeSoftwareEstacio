#include <stdio.h>
#include <time.h>


int main() {

    // Variaveis
    int numeroJogador, numeroComputador, resultado;
    char tipoComparacao;

    // Gerar Nuero
    srand(time(0)); // Inicia o contador para gerar os numeros aleatorios
    numeroComputador = rand() % 100 + 1; // Numero entre 1 e 10
    
    // Inicio do Jogo
    printf("Bem-vindo ao jogo Maior, Menor ou Igual\n");
    printf("Você deve escolher um número e o tipo de comparação\n");
    printf("M. Maior\n");
    printf("N. Menor\n");
    printf("I. Igual\n");

    printf("Escolha a comparação: ");
    scanf("%c", &tipoComparacao);

    printf("Escolha seu numero: ");
    scanf("%d", &numeroJogador);

    //Exibir número do computador
    printf("O número do computador é: %d\n", numeroComputador);

    switch(tipoComparacao) {

        case 'M':
        case 'm':
            printf("Você escolheu o numero maior\n");
            resultado = numeroJogador > numeroComputador ? 1 : 0;
            break;

        case 'N':
        case 'n':
            printf("Você escolheu o numero menor\n");

        resultado = numeroJogador < numeroComputador ? 1 : 0;
            break;

        case 'I':
        case 'i':
            printf("Empate\n");
            
        resultado = numeroJogador == numeroComputador ? 1 : 0;
            break;

        default:
            printf("Opção Inválida!\n");


    }



}