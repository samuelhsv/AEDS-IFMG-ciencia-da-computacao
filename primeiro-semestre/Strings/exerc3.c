#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char str[11]; // +1 do terminador nulo
    int descarte, i;

    printf("Digite uma palavra de ate 10 caracteres: \n");
    if (fgets(str, sizeof(str), stdin) != NULL){
	    if(strchr(str,'\n') == NULL){
		    while ((descarte = getchar()) != '\n' && descarte != EOF){}
        } 
    } else {
        printf("Erro ao ler a string!");
        return 1;
    }

    for (i=0;i<10; i++){
        if (toupper(str[i]) == str[i]){ // se a letra em str[i] for maiuscula...
            printf("%c", tolower(str[i])); // mostraremos ela minuscula
        }
        if (tolower(str[i]) == str[i]){ // a letra em str[i] é minuscula...
            printf("%c", toupper(str[i])); // mostraremos ela maiuscula
        }
    }

    return 0;
}