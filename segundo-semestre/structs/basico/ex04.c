#include <stdio.h>

struct Triangulo {
    float base;
    float altura;
};

int main(){
    struct Triangulo triangulo;
    
    puts("Digite o valor da base: ");
    scanf("%f", &triangulo.base);
    puts("Digite o valor da altura: ");
    scanf("%f", &triangulo.altura);

    printf("A área do triângulo é: %.2f", triangulo.base * triangulo.altura / 2);
    return 0;
}