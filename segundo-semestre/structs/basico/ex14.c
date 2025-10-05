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

    puts("\nProdutos que custam mais que R$ 50:\n");

    int encontrados = 0;
    for (int i=0; i<5; i++) {
        if (produto[i].preco > 50) {
            printf("ID: %d\nQuantidade: %d\nPreco: R$ %.2f\n\n", produto[i].id, produto[i].quantidade, produto[i].preco);
            encontrados++;
        }
    }

    if (encontrados == 0)
        puts("Nenhum produto custa mais que R$ 50");

    return 0;
}