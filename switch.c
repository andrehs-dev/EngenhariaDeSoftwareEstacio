#include <stdio.h>

int main() {

    int opcao;

    printf("Escolha uma opção: \n");
    printf("1. Verificar saldo\n");
    printf("2. Fazer Depósito\n");
    printf("3. Fazer saque\n");
    scanf("%d", &opcao);


    printf("----------------------------------------\n");


    switch (opcao) {
        case 1:
            printf("Seu saldo é de R$ 1.000,00\n");
        break;
        case 2:
            printf("Deposito realizado com sucesso!\n");
        break;
        case 3:
            printf("Saque realizado com sucesso\n");
        break;
        default:
            printf("Opção Inválida!\n");
    }

    return 0;

}