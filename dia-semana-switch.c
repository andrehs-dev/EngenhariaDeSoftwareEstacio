#include <stdio.h>

int main() {

    int dia;

    printf("Escolha um dia da semana (1= Domingo e 7 = Sabado): ");
    scanf("%d", &dia);


    printf("----------------------------------------------------\n");

    switch (dia) {
        case 1:
            printf("Hoje é domingo\n");
        break;
        case 2:
            printf("Hoje é Segunda-feira\n");
        break;
        case 3:
            printf("Hoje é Terça-feira\n");
        break;
        case 4:
            printf("Hoje é Quarta-feira\n");
        break;
        case 5:
            printf("Hoje é Quinta-feira\n");
        break;
        case 6:
            printf("Hoje é Sexta-feira\n");
        break;
        case 7:
            printf("Hoje é Sabado\n");
        break;
        default:
            printf("Opção Inválida!\n");

    }

    return 0;
}