#include <stdio.h>

struct Retangulo {
    float largura;
    float altura;
};

int main (){
    struct Retangulo retangulo;

    puts("Digite o valor da largura: ");
    scanf("%f", &retangulo.largura);
    puts("Digite o valor da altura: ");
    scanf("%f", &retangulo.altura);

    printf("O valor da area do retangulo é: %.2f", retangulo.largura * retangulo.altura);
    return 0;
}