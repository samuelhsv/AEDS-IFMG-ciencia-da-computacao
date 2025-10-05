#include <stdio.h>
#include <stdlib.h>

void triangulo(int a, int b, int c){
    if (a+b>c && a+c>b && b+c>a){
        puts("Esses lados formam um triangulo valido");
        tipo(a, b, c);
    } else puts("Esses lados nao formam um triangulo valido");
}

void tipo(int a, int b, int c){
    if (a == b && a == c) puts("do tipo equilatero");
    else if (a == b && a != c) puts("do tipo isosceles");
    else puts("do tipo escaleno");
}

int main()
{
    int a, b, c;

    puts("Insira os lados do triangulo: ");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if (a <= 0 || b <= 0 || c <= 0) {
        puts("Os lados do triangulo devem ser positivos.");
        return 1;
    }

    triangulo(a, b, c);

    return 0;
}