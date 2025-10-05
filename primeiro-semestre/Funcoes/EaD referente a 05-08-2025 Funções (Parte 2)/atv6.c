#include <stdio.h>
#include <stdlib.h>

int soma_coluna(int A[3][5], int coluna){
    int soma = 0;
    for (int i=0;i<3;i++){
        soma+=A[i][coluna];
    }
    return soma;
}