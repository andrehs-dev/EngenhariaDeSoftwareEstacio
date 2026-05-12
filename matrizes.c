#include <stdio.h>

int main (){

    // Dados/Variável
    int index;

    //Matriz
    char * nomesAlunos [3][3] = {
        {"Aluno 0", "Port: 30", "Mate: 80" }, // Lista
        {"Aluno 1", "Port: 50", "Mate: 40" }, // Lista
        {"Aluno 2", "Port: 80", "Mate: 60" }  // A ultima lista não precisa da virgula
    };

    // Guiando o usuário
    printf("Digite o número do aluno para saber a nota...\n");
    printf("Para o Aluno 0, digite 0\n");
    printf("Para o Aluno 1, digite 1\n");
    printf("Para o Aluno 2, digite 2\n");

    scanf("%d", &index);

    printf("As notas do %s são %s e %s", nomesAlunos[index][0], nomesAlunos[index][1], nomesAlunos[index][2]);


    return 0;   
}
