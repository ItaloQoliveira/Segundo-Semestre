#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(){
    FILE *arg;
    char c[20];

    arg=fopen("arqcalc.txt","r");

    while(fgets(c,20,arg) !=NULL );
    printf("%s",c);

    fclose(arg);
    return 0;
}