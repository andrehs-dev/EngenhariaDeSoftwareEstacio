#include <stdio.h>

    // Verificação de Notas

int main() {

    //Dado
    int nota;

    // Entrada de dados
    printf("Insira sua nota: ");
   scanf("%d", &nota);

    //Estrutura ENCADEADA
    if (nota >= 90){
        printf("Conceito A!\n");
    }   else if (nota >= 80) {
        printf("Conceito B!\n");
    }   else if (nota >= 70) {
        printf("Conceito C!\n");
    }   else if (nota >= 60) {
        printf("Conceito D\n");
    }   else if (nota >= 50) {
        printf("Conceito E!\n");
    }   else {
        printf("Conceito F!\n");
    }
         

    return 0;

}