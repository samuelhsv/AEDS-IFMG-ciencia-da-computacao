
// Online C Compiler - Build, Compile and Run your C programs online in your favorite browser

#include<stdio.h>

int main()
{
    int A[5], B[5], C[5], i;
    for (i=0;i<5;i++){
        printf("Valor para A[%d]: \n",i);
        scanf("%d", &A[i]);
    }
    
    for (i=0;i<5;i++){
        printf("Valor para B[%d]: \n",i);
        scanf("%d", &B[i]);
    }
    
    for (i=0;i<5;i++){
        C[i] = A[i] - B[i];
    }
    
    for (i=0;i<5;i++){
        printf("C[%d]: %d\n", i, C[i]);
    }
    return 0;
}
