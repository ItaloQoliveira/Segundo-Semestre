#include <stdio.h> // <3 Carol e Diogo
float func4(int v1, int div, int v2);
int main(){
    int a,b,c,t=0;
    do{
        t= 0;
        printf("Insira o valor A: ");
        scanf("%d",&a);
        printf("\nInsira o valor B: ");
        scanf("%d",&b);
        printf("\nInsira o valor C: ");
        scanf("%d",&c);
        if((c%a!=0) || (b%a!=0) ){
            t=1;
        }
    }while(t==1);
    printf("O resultado foi: %.2f",func4(b,a,c));
    return 0;
}
float func4(int v1, int div, int v2){
    float resultado=0,divf;
    int indice,aux;
    divf=div; 
    if(v2>v1){
        aux = v1;
        v1 = v2;
        v2 = aux;
    }
    for(indice=v2;indice<=v1;indice++){
        resultado +=  indice/divf ;
    }
    return resultado;

}


