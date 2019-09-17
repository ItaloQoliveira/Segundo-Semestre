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
    arg=fopen("/home/italo/SegundoSemestre/Segundo-Semestre/TecnicasDeProgramacao/arquivostxt/arqcalc.txt","r");
    varArquivo= fscanf(arg,"%f %c %f",&v1,&operador,&v2);
    while(varArquivo!=EOF){    
        
        switch (operador){
            case '+':
                printf("%.1f%c%.1f= %.1f\n",v1,operador,v2,soma((v1),(v2)));
                break;
            case '-':
                printf("%.1f%c%.1f= %.1f\n",v1,operador,v2,subt((v1),(v2)));
                break;
                case '*':
                printf("%.1f%c%.1f= %.1f\n",v1,operador,v2,multi((v1),(v2)));
                break;
            case '/':
                printf("%.1f%c%.1f= %.1f\n",v1,operador,v2,divisao((v1),(v2)));
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