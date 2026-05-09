#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int opcao;
    int numeroSecreto, palpite;
    int regras;

    printf("Menu principal\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Ver regras\n");
    printf("2. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);


    printf("-------------------------------------\n");

    switch (opcao) {
    // Iniciar Jogo
    case 1:
        srand(time(0));
        numeroSecreto = rand () % 10;

        printf("Digite um número de 0 a 9: ");
        scanf("%d", &palpite);

    if (numeroSecreto == palpite){

        printf("Vocẽ Acertou!\n");
        printf("Numero secreto: %d\n", numeroSecreto);
    } else {
        printf("Você Errou!\n");
        printf("Numero secreto: %d\n", numeroSecreto);
    }
    break;

    // Ver regras
    case 2:
        printf("Explicação das regras: \n");
        printf("Para ver as regras digite 1: ");
        scanf("%d", &regras);

        switch (regras) {
        case 1:
        printf("Você deve escolher um número entre 0 a 10.\n Escolhendo o número errado você perde!\n Escolhendo o certo, voce ganha!\n");
        break;

    }

    }



}