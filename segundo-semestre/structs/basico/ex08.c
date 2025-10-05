#include <stdio.h>

struct Cor {
    unsigned int codigo;
    char nome[10];
};

int main (){
    struct Cor cor[3];
    unsigned int maiorCode;
    char nome[10], c;

    for (int i=0;i<3;i++){
        printf("Codigo da cor %d: ", i+1);
        scanf("%d", &maiorCode);
        scanf(" %c", c);
        puts("Nome da cor: ");
        fgets(cor[i].nome, sizeof(cor[i].nome), stdin);
        scanf(" %c", c);
    }
    
    maiorCode = cor[3].codigo;
    for (int i=0;i<2;i++){
        if (cor[i].codigo > maiorCode){
            maiorCode = cor[i].codigo;
        }
    }

    printf("Cor com maior codigo: %s", nome);
    return 0;
}