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
            if (j >= n-i-1){ // garante que j (coluna) sempre vai permitir armazenar +1 '*' a cada nova linha (n° da coluna > tam. da matriz - n° da linha - 1)
                matriz[i][j] = '*'; // e.g.: matriz[2][0]  ->  0 >= 5 - 2 - 1  -> 0 nao é maior, portanto nao adiciona
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
