#include <stdio.h>

struct Aluno {
    int matricula;
    float nota;
};

int main (){
    struct Aluno aluno[3],temp;

    for (int i=0;i<3;i++){
        printf("Matricula do aluno %d: ", i+1);
        scanf("%d", &aluno[i].matricula);
        puts("Nota do aluno: ");
        scanf("%f", &aluno[i].nota);
    }

    //bubble sort
    for (int i = 0; i < 2; i++) {           // repete 2 vezes
        for (int j = 0; j < 2 - i; j++) {   // compara vizinhos
            if (aluno[j].nota > aluno[j + 1].nota) {
                temp = aluno[j];            // troca
                aluno[j] = aluno[j + 1];
                aluno[j + 1] = temp;
            }
        }
    }

   
    printf("\nAlunos em ordem crescente de nota:\n");
    for (int i = 0; i < 3; i++) {
        printf("Aluno %d:\n Matricula: %d | Nota: %.2f\n\n",
               i + 1, aluno[i].matricula, aluno[i].nota);
    }
    return 0;
}