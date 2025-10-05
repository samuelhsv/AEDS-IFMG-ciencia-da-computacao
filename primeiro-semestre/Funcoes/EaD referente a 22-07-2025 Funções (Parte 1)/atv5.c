#include <stdio.h>
#include <stdlib.h>

int somatorio(int a, int b){
    int soma=0, aux;
    if (b > a){
        aux = a;
        a = b;
        b = aux;
    }
    for (int i=b+1;i<a;i++){ // a sempre será o maior
        soma += i;
    }
    return soma;
}

int main()
{
    int a, b;

    puts("Insira dois valores: ");
    scanf("%d", &a);
    scanf("%d", &b);

    if (a == b) {
        puts("Os valores devem ser diferentes");
        return 1;
    }

    printf("A soma dos valores entre %d e %d e: %d",a, b, somatorio(a, b));

    return 0;
}