#include <stdio.h>
#include <stdlib.h>

int funcao(int n){
    if (n < 0) return -1;
    else if (n > 0) return 1;
    else return 0;
}

int main()
{
    int n;

    puts("Insira um numero");
    scanf("%d", &n);

    if (funcao(n) < 0) puts("O numero e negativo!");
    else if (funcao(n) > 0) puts("O numero e positivo!");
    else puts("O numero e zero!");

    return 0;
}