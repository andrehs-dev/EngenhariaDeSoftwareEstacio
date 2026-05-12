#include <stdio.h>

int main() {

    int numero;

    do {

        printf("Digite um numero par para sair do programa...\n");
        scanf("%d", &numero);

        if (numero % 2 == 0)
        {
            printf("%d É par!\n", numero);
        }
        else
        { 
            printf("%d É Impar\n", numero);
        }

    }   while (numero % 2 != 0);

        printf("Você digitou um número par! Saindo do programa!\n");

return 0;
}