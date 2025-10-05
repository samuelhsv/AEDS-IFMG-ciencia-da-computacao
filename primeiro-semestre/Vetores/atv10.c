#include<stdio.h>

int main()
{
    int i, j, k, matrizA[3][3], matrizB[3][3], matrizC[3][3];
    
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            printf("Digite o valor [%d][%d] para Matriz A: ", i, j);
            scanf("%d", &matrizA[i][j]);
        }
    }
    
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            printf("Digite o valor [%d][%d] para Matriz B: ", i, j);
            scanf("%d", &matrizB[i][j]);
        }
    }
    
    // A matriz C vai ser a soma do produto das primeiras linhas da matriz A pelas colunas da matriz B
    
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            matrizC[i][j] = 0;
            for (k = 0; k < 3; k++) { // k vai iterar para as matrizes A e B
                matrizC[i][j] += matrizA[i][k] * matrizB[k][j];
                             // coluna varia     linha varia
                             // linha fixa        coluna fixa
            }
        }
    }
    
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            printf(" %d ", matrizC[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
