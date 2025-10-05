#include <stdio.h>
#include <stdlib.h>

int expo(int a, int n){
    if (n == 0) return 1;
    else if (n == 1) return a;
    else if (n>0 && n%2==0) {
            int valor = expo(a, n/2); // vai chamar a funcao de novo, passando como base e expoente os valores do metodo
            return valor*valor;
    }
    else if (n>0 && n%2!=0) {
            int valor = expo(a, (n-1)/2);
            return a * (valor*valor);
    }
}

int main()
{
    int n, a;
    puts("Digite o numero da BASE: ");
    scanf("%d", &a);
    puts("Digite o expoente: ");
    scanf("%d", &n);

    printf("%d ", expo(a, n));

    return 0;
}