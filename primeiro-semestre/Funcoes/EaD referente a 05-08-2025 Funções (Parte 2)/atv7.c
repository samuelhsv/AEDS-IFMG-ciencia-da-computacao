#include <stdio.h>

void identidade(int matriz[5][5]){
    int cont = 0;
    for (int i=0;i<5;i++){
        for (int j=0;j<5;j++){
            if (i == j){
                if (matriz[i][j] == 1) cont++;
            } else {
                if (matriz[i][j] == 0) cont++;
            }
        }
    }   
    if (cont == 25) puts("A matriz e a identidade");
    else puts("A matriz nao e a identidade");
}