#include <stdio.h>

struct Pessoa {
    char nome[50];
    int idade;
};

int main (){
    struct Pessoa pessoa[3];

    for(int i=0; i<3; i++){    
        puts("Digite o nome: ");
        getchar();
        fgets(pessoa[i].nome, sizeof(pessoa[i].nome), stdin);
        puts("Digite a idade: ");
        scanf("%d", &pessoa[i].idade);
    }

    for(int i=0; i<3; i++){  
        printf("\nPessoa %d: Nome: %sIdade: %d",i+1, pessoa[i].nome, pessoa[i].idade);
    }

    return 0;
}