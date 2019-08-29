#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
void verificar(char[]);
float soma(float,float);
float divisao(float,float);
float multi(float,float);
float subt(float,float);
int main(int tam,char *valor[] ){
    verificar(*valor);
    switch (*valor[2]){
    case '+':
        printf("%.2f",soma(atof(valor[1]),atof(valor[3])));
        break;
    case '-':
        printf("%.2f",subt(atof(valor[1]),atof(valor[3])));
        break;
    case 'm':
        printf("%.2f",multi(atof(valor[1]),atof(valor[3])));
        break;
    case '/':
        printf("%.2f",divisao(atof(valor[1]),atof(valor[3])));
        break;
    default:
        printf("\nOpção invalida\n");
        break;
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
void verificar (char valor[]){
    if(isdigit(valor[1])){
     printf("Valor invalido, insira um novo numero");
     printf("%s",valor)   
    }else {
        printf("ok");
    }

}