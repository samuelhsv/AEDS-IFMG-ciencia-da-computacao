#include<stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, n;
    
    printf("Digite o tamanho da matriz ");
    scanf("%d", &n);
    
    char **matriz = malloc(n * sizeof(char*));
    for (i=0;i<n; i++) {
        matriz[i] = malloc(n * sizeof(char*)); 
    }
    
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            if (i>=j){
                matriz[i][j] = '*';
            } else {
                matriz[i][j] = ' ';
            }
        }
    }
    
    
    for (i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf(" %c ", matriz[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
