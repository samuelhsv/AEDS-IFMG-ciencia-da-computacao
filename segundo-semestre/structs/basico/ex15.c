#include <stdio.h>

struct Aluno {
    int matricula;
    float nota;
};

int main (){
    struct Aluno aluno[3];
    int busca, alteracao = 0;

    for (int i=0;i<3;i++){
        printf("Matricula do aluno %d: ", i+1);
        scanf("%d", &aluno[i].matricula);
        printf("Nota do aluno: ");
        scanf("%f", &aluno[i].nota);
    }

    puts("Digite a matricula do aluno para alteracao: ");
    scanf("%d", &busca);
    for (int i=0; i<3; i++){
        if (busca == aluno[i].matricula){
            printf("\nDados do aluno:\nMatricula: %d\nNota: %.2f\nDigite a nova nota: ", aluno[i].matricula, aluno[i].nota);
            scanf("%f", &aluno[i].nota);
            printf("\nDados atualizados!\nMatricula: %d\nNota: %.2f\n", aluno[i].matricula, aluno[i].nota);
            alteracao += 1;
        }
    }
    if (!alteracao){
        puts("Aluno inexistente!");
    }

    return 0;
}