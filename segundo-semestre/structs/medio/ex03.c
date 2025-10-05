#include <stdio.h>

struct Produto {
    char nome[50];
    float preco;
};

int main (){
    struct Produto produto[5];
    int descarte;

    for(int i=0; i<5; i++){  
        printf("Digite o nome do %do produto: ", i+1);
        getchar();
        if (fgets(produto[i].nome, sizeof(produto[i].nome), stdin) != NULL){
            size_t len = strlen(produto[i].nome);
            if (len > 0 && produto[i].nome[len - 1] == '\n')
                produto[i].nome[len - 1] = '\0';
            else
                while ((descarte = getchar()) != '\n' && descarte != EOF) {}
        }

        puts("Digite o preco: ");
        scanf("%f", &produto[i].preco);
    }

    puts("Dados dos produtos");
    for(int i=0; i<5; i++){  
        printf("\nNome: %s\nPreco: %.2f\n\n", produto[i].nome, produto[i].preco);
    }

    return 0;
}