#include <stdio.h>
#include <stdlib.h>

void fib(int n){
    int a=0, b=1, temp;
    for (int i=0;i<n;i++){
        printf("%d ", a);
        temp = a + b;
        a = b;
        b = temp;
    }
}

int main()
{
    int n;
    puts("Digite um numero: ");
    if ((scanf("%d", &n)) != 1) {
        puts("Entrada invalida!"); // verificacao nao precisa na prova
        return 1;
    } else if (n <= 0) {
        puts("Entrada invalida: informe um numero inteiro e positivo");
        return 2;
    }

    fib(n);
        

    return 0;
}