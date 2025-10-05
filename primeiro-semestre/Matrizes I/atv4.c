#include<stdio.h>

int main()
{
    int i, j, matrizA[2][2], matrizB[2][2], matrizC[2][2], opcao, sair = 0, C = 0, constante;
    
    for (i=0;i<2;i++){
        for (j=0;j<2;j++){
            printf("Digite o valor [%d][%d] para Matriz A: ", i, j);
            scanf("%d", &matrizA[i][j]);
        }
    }
    
    for (i=0;i<2;i++){
        for (j=0;j<2;j++){
            printf("Digite o valor [%d][%d] para Matriz B: ", i, j);
            scanf("%d", &matrizB[i][j]);
        }
    }
    
    while (sair==0){
        printf("    MENU    \n");
        printf("============\n");
        printf("1. Somar as matrizes\n");
        printf("2. Subtrair a primeira matriz pela segunda\n");
        printf("3. Adicionar uma constante às duas matrizes\n");
        printf("4. Imprimir as matrizes\n");
        printf("5. Sair\n");
        printf("============\n");
        scanf("%d", &opcao);
        
        switch (opcao) {
            case 1: // somar
                for (i=0;i<2;i++){
                    for (j=0;j<2;j++){
                        matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
                    }   
                }
                C = 1;
                break;
                
            case 2: // subtrair
                for (i=0;i<2;i++){
                    for (j=0;j<2;j++){
                        matrizC[i][j] = matrizA[i][j] - matrizB[i][j];
                    }   
                }
                C = 1;
                break;
            case 3: // constante
                printf("Digite a constante a ser adicionada: ");
                scanf("%d", &constante);
                for (i=0; i<2;i++) {
                    for (j=0;j<2;j++) {
                        matrizA[i][j] += constante;
                        matrizB[i][j] += constante;
                    }
                }
                break;
                
            case 4: // imprimir
                printf("Matriz A\n");
                for (i=0;i<2;i++){
                    for (j=0;j<2;j++){
                        printf(" %d ", matrizA[i][j]);
                    } 
                    printf("\n");
                }
                
                printf("Matriz B\n");
                for (i=0;i<2;i++){
                    for (j=0;j<2;j++){
                        printf(" %d ", matrizB[i][j]);
                    } 
                    printf("\n");
                }
                
                if (C){
                    printf("Resultado Soma/Subtracao\n");
                    for (i=0;i<2;i++){
                        for (j=0;j<2;j++){
                            printf(" %d ", matrizC[i][j]);
                        } 
                        printf("\n");
                    }    
                }
                
                break;
                
            case 5:
                sair = 1;
                break;
                
            default:
                printf("Opcao invalida!\n");
        }
        
    }
    
    
    return 0;
}
