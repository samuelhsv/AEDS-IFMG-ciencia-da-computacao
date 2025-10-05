#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, a, resultado = 1;
    puts("Digite o numero da BASE: ");
    scanf("%d", &a);
    puts("Digite o expoente: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) resultado = resultado * a;

    printf("%d ", resultado);

    return 0;
}