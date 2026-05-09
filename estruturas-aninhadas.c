#include <stdio.h>

int main () {

    int idade;

    printf("Digite sua Idade: ");
    scanf("%d", &idade);

    if (idade <= 60 && idade >= 18) {
        printf("Você é Adulto\n");
    }   else if (idade <= 17 && idade >= 12){
        printf("Você é adolescente\n");
    }   else if (idade <= 11){
        printf("Vocé uma criança\n");
    }   else {
        printf("Você é idoso\n");
    }

    return 0;

}