#include <stdio.h>
#include <string.h>

struct Endereco {
    char rua[50];
    int numero;
};

struct Pessoa {
    char nome[50];
    int idade;
    struct Endereco endereco;
};


int main (){
    struct Pessoa pessoa[2];
    int descarte;

    for(int i=0; i<2; i++){    
        printf("Digite o nome: ");
        getchar();
        if (fgets(pessoa[i].nome, sizeof(pessoa[i].nome), stdin) != NULL){
            size_t len = strlen(pessoa[i].nome);
            if (len > 0 && pessoa[i].nome[len - 1] == '\n')
                pessoa[i].nome[len - 1] = '\0';
            else
                while ((descarte = getchar()) != '\n' && descarte != EOF) {}
        }

        puts("Digite a idade: ");
        scanf("%d", &pessoa[i].idade);

        printf("Digite a rua da casa: ");
        getchar();
        if (fgets(pessoa[i].endereco.rua, sizeof(pessoa[i].endereco.rua), stdin) != NULL){
            size_t len = strlen(pessoa[i].endereco.rua);
            if (len > 0 && pessoa[i].endereco.rua[len - 1] == '\n')
                pessoa[i].endereco.rua[len - 1] = '\0';
            else
                while ((descarte = getchar()) != '\n' && descarte != EOF) {}
        }
        
        printf("Digite o numero da casa: ");
        scanf("%d", &pessoa[i].endereco.numero);  
    }

    for(int i=0; i<2; i++){  
        printf("\nPessoa %d: Nome: %s | Idade: %d\nRua: %s\nNumero: %d\n",i+1, pessoa[i].nome, pessoa[i].idade, pessoa[i].endereco.rua, pessoa[i].endereco.numero);
    }

    return 0;
}