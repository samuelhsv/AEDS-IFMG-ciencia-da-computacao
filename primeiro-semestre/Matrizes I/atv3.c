#include<stdio.h>

int main()
{
    int i, j, matriz[3][6], somaImp = 0, soma1e2 = 0;
    float media = 0;
    
    for (i=0;i<3;i++){
        for (j=0;j<6;j++){
            printf("Digite o valor [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    // soma colunas impares (matriz[i][0], matriz[i][2] e matriz[i][4])
    for (i=0;i<3;i++){
        for (j=0;j<6;j+=2){
            somaImp += matriz[i][j];
        }  
    }
    
    // media 2a e 4a colunas (matriz[i][1] e matriz[i][3])
    for (i=0;i<3;i++){
        for (j=1;j<4;j+=2){
            media += matriz[i][j];
        }  
    }
    
    
    // modificar 6a coluna (matriz[i][5]) com a soma da 1a com 2a (matriz[i][0] e matriz[i][1])
    for (i=0;i<3;i++){ // pegar de cada linha
        matriz[i][5] = matriz[i][0] + matriz[i][1];
    }
    
    printf("A soma de todos os elementos das colunas ímpares: %d\n", somaImp);
    printf("A média aritmética dos elementos da segunda e quarta colunas é: %.2f\n", media/6);
    
    for (i=0;i<3;i++){
        for (j=0;j<6;j++){
            printf(" %d ", matriz[i][j]);
        } 
        printf("\n");
    }

    return 0;
}
