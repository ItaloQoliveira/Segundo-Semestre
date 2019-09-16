#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
float soma(float,float);
float divisao(float,float);
float multi(float,float);
float subt(float,float);
int main(){
    char varArquivo,operador;
    float v1,v2;
    FILE *arg;
    arg=fopen("arqcalc.txt","r");
    varArquivo= fscanf(arg,"%f %c %f",&v1,&operador,&v2);
    while(varArquivo!=EOF){    
        
        switch (operador){
            case '+':
                printf("%.2f\n",soma((v1),(v2)));
                break;
            case '-':
                printf("%.2f\n",subt((v1),(v2)));
                break;
                case '*':
                printf("%.2f\n",multi((v1),(v2)));
                break;
            case '/':
                printf("%.2f\n",divisao((v1),(v2)));
                break;
            default:
                printf("\nOpção invalida\n");
                break;
        }
        varArquivo= fscanf(arg,"%f %c %f",&v1,&operador,&v2);
    }



    
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