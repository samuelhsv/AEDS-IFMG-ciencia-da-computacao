#include <stdio.h>

struct Produto {
    int id;
    int quantidade;
    float preco;
};

int main (){
    struct Produto produto[5];
    int busca;

    for (int i=0;i<5;i++){
        puts("Digite o ID do produto: ");
        scanf("%d", &produto[i].id);
        puts("Digite a quantidade: ");
        scanf("%d", &produto[i].quantidade);
        puts("Digite o preco do produto: ");
        scanf("%f", &produto[i].preco);
    }

    puts("Digite o ID do produto para busca: ");
    scanf("%d", &busca);
    for (int i=0; i<5; i++){
        if (busca == produto[i].id){
            printf("Dados do produto: ID:%d\nQuantidade: %d\nPreco: %.2f", produto[i].id, produto[i].quantidade, produto[i].preco);
        }
    }

    
    return 0;
}