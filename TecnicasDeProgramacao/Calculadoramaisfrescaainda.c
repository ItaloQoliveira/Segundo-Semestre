#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
float soma(float,float);
float divisao(float,float);
float multi(float,float);
float subt(float,float);
int main(){
    char c[25],operador;
    float v1,v2;
    FILE *arg;
    arg=fopen("arqcalc.txt","r");
    do{
        fgets(c,25,arg);    
        fscanf(arg,"%f %c %f",&v1,&operador,&v2);
        if(c!=EOF){
            switch (operador){
            case '+':
                printf("%.2f",soma((v1),(v2)));
                break;
            case '-':
                printf("%.2f",subt((v1),(v2)));
                break;
            case '*':
                printf("%.2f",multi((v1),(v2)));
                break;
            case '/':
                printf("%.2f",divisao((v1),(v2)));
                break;
            default:
                printf("\nOpção invalida\n");
                break;
            }
        }
    }while(c!=EOF);
}
float soma(float a,float b){
    return a+b;
}
float subt(float a,float b){
    return a-b;
}
float multi(float a,float b){
    return a*b;
}
float divisao(float a,float b){
    return a/b;
}