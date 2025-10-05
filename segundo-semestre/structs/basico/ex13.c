#include <stdio.h>

struct Retangulo {
    float largura;
    float altura;
};

int main (){
    struct Retangulo retangulo[5];
    float soma = 0, area;

    for(int i=0; i<5; i++){    
        puts("Digite o valor da largura: ");
        scanf("%f", &retangulo[i].largura);
        puts("Digite o valor da altura: ");
        scanf("%f", &retangulo[i].altura);
    }

    for(int i=0; i<5; i++){  
        soma += retangulo[i].largura * retangulo[i].altura;
    }

    printf("O valor da soma das areas dos retangulo é: %.2f", soma);
    return 0;
}