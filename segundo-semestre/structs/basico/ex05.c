#include <stdio.h>

struct Produto {
    int id;
    int quantidade;
    float preco;
};

int main (){
    struct Produto produto;
    
    puts("Digite o ID do produto: ");
    scanf("%d", &produto.id);
    puts("Digite a quantidade: ");
    scanf("%d", &produto.quantidade);
    puts("Digite o preco do produto: ");
    scanf("%f", &produto.preco);

    printf("Valor total: R$ %.2f", produto.quantidade * produto.preco);
    return 0;
}