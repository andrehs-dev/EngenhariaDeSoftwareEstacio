#include <stdio.h>

int main(){

    // Varíaveis
    float nota1, nota2, nota3;
    int opcao;
    float media;

    // Menu
    printf("### Bem-vindo ao Calculo de Média! ###\n");
    printf("1. Inserir Notas\n");
    printf("2. Veirificação Média\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);
    
    printf("----------------------------------------\n");

    switch (opcao) {
        case 1:
        printf("### Calculando a média ###\n");
        printf("Insira a Primeira nota: ");
        scanf("%f", &nota1);
        printf("Insira a Segunda nota: ");
        scanf("%f", &nota2);
        printf("Insira da Terceira nota: ");
        scanf("%f", &nota3);

        // Calculo
        media = (nota1 + nota2 + nota3) / 3;

        printf("A sua média é: %.2f\n", media);
        break;

        // Determinação do status baseado na média
        case 2:
        printf("### Insira a Média do Estudante ###\n");
        printf("valor da Média: ");
        scanf("%f", &media);

        printf("--------------------------------------------\n");

        printf("### Verificando a Média... ###\n");
        if (media >= 9.0){
            printf("Parabéns! Você passou muito bem!\n");
        }
        else if (media >= 7.0){
            printf("Você passou! Parabéns!\n");
        }
        else{
            printf("Você Reprovou!\n");
        }
        break;

        // Saida
        case 3:
        printf("Você saiu do programa!\n");
        break;
    }

    return 0;

}