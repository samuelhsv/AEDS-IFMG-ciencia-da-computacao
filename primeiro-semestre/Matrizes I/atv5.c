#include<stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, n;
    
    printf("Digite o tamanho da matriz ");
    scanf("%d", &n);
    
    
    // Aloca n linhas
    int **matriz = malloc(n * sizeof(int));
    // a partir de agora matriz equivale ao endereço de memoria, e *matriz o que tem nesses endereços
    // *: ponteiro de ints  |  **: ponteiro para ponteiro de ints
    
    // Aloca para cada linha mais n colunas
    for (i=0;i<n; i++) {
        matriz[i] = malloc(n * sizeof(int)); // para cada endereço alocado em matriz, alocar mais outros n endereços
    }
    
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            if (i==j){
                matriz[i][j] = 1;
            } else {
                matriz[i][j] = 0;
            }
        }
    }
    
    
    for (i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf(" %d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
