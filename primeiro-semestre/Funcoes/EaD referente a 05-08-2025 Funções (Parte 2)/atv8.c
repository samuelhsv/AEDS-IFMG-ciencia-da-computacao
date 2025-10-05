#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool comparar(char str1[], char str2[]){
   if (!strcmp(str1, str2)) return true;
   else return false;
}