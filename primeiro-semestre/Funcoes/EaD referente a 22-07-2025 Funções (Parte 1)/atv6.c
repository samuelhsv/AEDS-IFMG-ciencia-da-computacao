#include <stdio.h>
#include <stdlib.h>

int exclama(int n){
    for (int i=0;i<=n;i++){
        for (int j=0;j<i;j++){
            printf("!");
        }
        puts("");
    }    

}

int main()
{
    int n;

    puts("Insira um valor: ");
    scanf("%d", &n);

    exclama(n);

    return 0;
}