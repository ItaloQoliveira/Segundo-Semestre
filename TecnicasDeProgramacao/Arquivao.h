#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>


void media1(int n){ // o n é a quantidade de numeros
    int i;                             
    float resultado,numeros[50],somatotal=0; //não sei exatamente porque deixei em 50 o maximo, podia ter usado uma variavel. Optei pelo vetor por conta de poder mostrar os velores posteriormente ou coisa do tipo
    for (i=0;i<n;i++){
        printf("\nInsira o número:");
        scanf("%f",&numeros[i]);
        somatotal+=numeros[i];
    }
    resultado=somatotal/n;
    printf("A média de todos os %d numeros é de %.2f ",n,resultado);
}

void media2 (int n){// o n é a quantidade de numeros
int i;
    float resultado,numeros[50],somatotal=0,pesos[50],pesototal=0;                       
    for (i=0;i<n;i++){
        printf("\nInsira o número:");
        scanf("%f",&numeros[i]);
        printf("\nInsira o peso:");
        scanf("%f",&pesos[i]);     
        pesototal+=pesos[i];
        somatotal+=(numeros[i]*pesos[i]);
    }
    resultado=somatotal/pesototal;
    printf("A média de todos os %d numeros é de %.2f",n,resultado);

}

void media3 (int n){ // o n é a quantidade de numeros
    int i; // essa é meio diferente: raiz de indice n do produto de tudo pow(pt,1/n)
    float produtototal=1,numeros[50],resultado;
    for (i=0;i<n;i++){
        printf("\nInsira o numero:");
        scanf("%f",&numeros[i]);
        produtototal=(produtototal*numeros[i]);

    }
                        //importante:Caso não seja 1.0, dá erro.
    resultado= pow(produtototal,1.0/n); //nota mental: Quando usar a math.h usar o gcc com -lm
    printf("A media de todos os %d números é de %.2f",n,resultado); 

}

void media4 (int n){// o n é a quantidade de numeros
    int i;
    float numeros[50],somainversos=0,resultado;
    for(i=0;i<n;i++){
        printf("\nInsira o numero:");
        scanf("%f",&numeros[i]);
        numeros[i]=1/numeros[i];
        somainversos+=numeros[i];
    }
    somainversos=somainversos/n;
    resultado=pow(somainversos,-1);
    printf("O resultado da média é de %.2f",resultado);
}
