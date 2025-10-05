#include <stdio.h>
#include <stdlib.h>

int main()
{
    float matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    
    float *p = &matriz[0][0];

    while (p != &matriz[2][2]) {
        printf("%p\n", p);
        p++;
}

    return 0;
}