#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c = 1;
    int i = 2;
    float f = 3;
    double d = 4;
    
    char *pc = &c;
    int *pi = &i;
    float *pf = &f;
    double *pd = &d;

    puts("Valores antes: ");
    puts("CHAR INT  FLOAT DOUBLE ");
    printf(" %d    %i   %.2f   %.2lf\n\n", c, i, f, d);

    *pc = *pc + 1;
    *pi = *pi * 5;
    *pf = *pf - 3;
    *pd = *pd / (*pd);

    puts("Valores depois: ");
    puts("CHAR INT  FLOAT DOUBLE ");
    printf("%d    %i   %.2f   %.2lf", c, i, f, d);

    return 0;
}