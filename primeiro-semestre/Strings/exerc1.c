#include <stdio.h>
#include <string.h>

int main(){
    char str1[10], str2[10];
    int descarte;

    printf("Digite a 1a palavra: \n");
    if (fgets(str1, sizeof(str1), stdin) != NULL){
	    if(strchr(str1,'\n') == NULL){
		    while ((descarte = getchar()) != '\n' && descarte != EOF){}
	    }
    } else {
        printf("Erro ao ler a 1a string!");
        return 1;
    }

    printf("Digite a 2a palavra: \n");
    if (fgets(str2, sizeof(str2), stdin) != NULL){
	    if(strchr(str2,'\n') == NULL){
		    while ((descarte = getchar()) != '\n' && descarte != EOF){}
	    }
    } else {
        printf("Erro ao ler a 2a string!");
        return 1;
    }
    
    printf("1a palavra: %s", str1);
    printf("2a palavra: %s", str2);

    return 0;
}