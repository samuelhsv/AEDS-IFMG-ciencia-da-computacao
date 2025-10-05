#include <stdio.h>
#include <stdlib.h>

int main()
{
    float vetor[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    
    float *p = vetor;

    for (int i=0;i<10;i++) {
        printf("[%d]: %p\n",i, p); 
        p++;
    }

    return 0;
}