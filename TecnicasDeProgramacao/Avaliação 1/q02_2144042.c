#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(){
    FILE *origem, *destino;		
	int n1,n2,n3,n4,n5;	
	origem = fopen("origem.txt","r");
	destino = fopen("destino.txt","w");	
    while(fscanf(origem,"%d;%d;%d;%d;%d",&n1,&n2,&n3,&n4,&n5) != EOF){
        fprintf(destino,"%d;%d;%d;%d:%d\n",n5,n4,n3,n2,n1);
    }	
	fclose(origem);
	fclose(destino);
	return 0;
}
