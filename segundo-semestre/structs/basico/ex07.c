#include <stdio.h>

struct Produto {
    int id;
    int quantidade;
    float preco;
};

int main (){
    struct Produto produto;
    int id;
    float caro;

    for (int i=0;i<3;i++){
        puts("Digite o ID do produto: ");
        scanf("%d", &produto.id);
        puts("Digite a quantidade: ");
        scanf("%d", &produto.quantidade);
        puts("Digite o preco do produto: ");
        scanf("%f", &produto.preco);
        if (i == 0){
            caro = produto.preco;
            id = produto.id;
        } else {
            if (produto.preco > caro){
               caro = produto.preco; 
               id = produto.id;
            }
        }
    }

    printf("ID do produto mais caro: %d", id);
    return 0;
}