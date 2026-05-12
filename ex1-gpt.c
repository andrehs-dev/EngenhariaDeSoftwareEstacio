#include <stdio.h>

int main() {

    // Variaves
    int idade;
    int senha;
    int login;

    // Layout
    printf("### Bem-vindo ###\n");
    printf("---------------------\n");
    printf("1. Acessar o sistema\n");
    printf("2. Sair\n");
    printf("Insira sua opção: ");
    scanf("%d", &login);

    // Logica
    switch (login)
    {
    case 1:
        printf("### Sistema de Login ###\n");
        printf("Insira sua idade: ");
        scanf("%d", &idade);

        printf("Insira sua senha: ");
        scanf("%d", &senha);

        if (senha == 2026 && idade >= 18){
            printf("Acesso Permitido!");
        }
        else{
            printf("Acesso Negado!");
        }
        break;

        case 2:
        printf("Você saiu do sistema!");
        break;
    }
    return 0;
}