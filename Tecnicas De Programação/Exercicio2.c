#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void media1 (int n);
void media2 (int n);
void media3 (int n);
void media4 (int n);

int main(){
    int op;
    int n;
    
    printf("Quantos valores serão utilizados?\n");
    scanf("%d",&n);
    
    printf("Qual media deseja calcular?\n 1-Media aritmetica simples\n 2-Media aritmetica ponderada\n 3-Media geometrica\n 4-Media harmonica\n");
    scanf("%d",&op);
    switch (op){
    case 1:
        media1(n);
        break;
    case 2:
        media2(n);
        break;
    case 3:
        media3(n);
    case 4:
        media4(n);
    default:
        break;
    }

    return 0;
}

void media1(int n){
    int i,numeros[50],somatotal=0;
    float resultado;
    for (i=0;i<n;i++){
        printf("\nInsira o número:");
        scanf("%d",&numeros[i]);
        somatotal+=numeros[i];
    }
    resultado=somatotal/n;
    printf("A média de todos os %d numeros é de %f ",n,resultado);
}

void media2 (int n){

}

void media3 (int n){


}

void media4 (int n){

    
}