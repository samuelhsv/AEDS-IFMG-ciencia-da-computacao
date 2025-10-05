#include <stdio.h>
#include <string.h>

int main(){
    char str[101]; // +1 do terminador nulo
    int descarte;

    printf("Digite uma palavra de ate 100 caracteres: \n");
    if (fgets(str, sizeof(str), stdin) != NULL){
	    if(strchr(str,'\n') == NULL){
		    while ((descarte = getchar()) != '\n' && descarte != EOF){}
            printf("A sua string tem 100 caracteres");
	    } else { // se encontar '\n' na string...
            char *pos = strchr(str, '\n'); // pos aponta para a primeira aparicao de '\n' na string
            printf("A sua string tem %ld caracteres", pos - str); // pos (endereço) - str (endereco) retorna um numero inteiro (long int -> %ld), que nesse caso é a posicao de '\n' 
                                                       // como os indices começam em 0, sempre vai retornar comprimento real da string
        }
    } else {
        printf("Erro ao ler a string!");
        return 1;
    }

    return 0;
}