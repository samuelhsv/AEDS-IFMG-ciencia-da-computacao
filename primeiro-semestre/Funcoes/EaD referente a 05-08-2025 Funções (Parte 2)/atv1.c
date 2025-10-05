#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int caps(char c){
    if (!isalpha(c)) return c;
    if (c == toupper(c)) return tolower(c); // se for maiuscula...
    else return toupper(c); // se for minuscula...
}
