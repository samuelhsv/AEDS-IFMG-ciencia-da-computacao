#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A, *B, **C, ***D;
    B = &A;
    C = &B;
    D = &C;

    puts("Digite um valor: ");
    scanf("%d", &A);
    
    printf("Valor de A: %d\n", A);
    printf("Dobro: %d\n", *B * 2);
    printf("Triplo: %d\n", **C * 3);
    printf("Quadruplo: %d", ***D * 4);

    return 0;
}