#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

float potencia(float);

int main(){
    float numero;  //meu pc travou 225x e perdi 20 min :P
    char arquivo;
    FILE *entrada;
    FILE *saida;
    entrada = fopen("num.txt","r");
    saida = fopen("pot.txt","w");
    arquivo=fscanf(entrada,"%f",&numero);
    while(arquivo!=EOF){
        fprintf(saida,"%.0f^2 = %.0f\n",numero,potencia(numero));
        arquivo=fscanf(entrada,"%f",&numero);

    }

    fclose(entrada);
    fclose(saida);
}

float potencia(float num){
    int i,contadorimpar=0;
    float potencia=0;
    for(i=0;contadorimpar<num;i++){
        if ((i%2)!=0){
            potencia+=i;
            contadorimpar++;
        }

    }
    return potencia;
}