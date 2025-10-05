#include <stdio.h>

struct Aluno {
    int matricula;
    float nota;
};

int main (){
    struct Aluno aluno;
    float media = 0;
    
    for (int i=0;i<5;i++){
        printf("Matricula do aluno %d: ", i+1);
        scanf("%d", &aluno.matricula);
        puts("Nota do aluno: ");
        scanf("%f", &aluno.nota);
        media += aluno.nota;
    }

    printf("Media das notas: %.1f", media/5);
    return 0;
}