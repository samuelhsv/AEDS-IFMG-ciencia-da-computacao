#include<stdio.h>

int main()
{
    int i, j, k, matriz[3][3], soma[3];
    
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            printf("Digite o valor [%d][%d] ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    j=0;
    for (i=0;i<3;i++){
        soma[i] = 0;
        for(k=0;k<3;k++){
            soma[i] += matriz[k][i];
        }
    }
    
    printf("Vetor da soma: \n");
    for (i=0;i<3;i++){
        printf(" %d ", soma[i]);
    }
    
    return 0;
}
