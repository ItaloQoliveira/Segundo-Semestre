#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

void metodo1(int n);
void metodo2(int n);
void metodo3(int n); 
void metodo4(int n);

void main(){      //Devido a precisão dos números, tá tudo estranho.
    int op,n;
    printf("\nQual será o número de vezes que o algoritmo irá rodar?\n ");
    scanf("%d",&n);
    printf("1-Wallis\n2-Gregory\n3-Euler1\n4-Euler2\n ");
    scanf("%d",&op);
    switch (op){
    case 1:
        metodo1(n);
        break;
    case 2:
        metodo2(n);
        break;
    case 3:
        metodo3(n);
        break;
    case 4:
        metodo4(n);
        break;
    default:
        printf("Opção invalida.\n");
        main();
        break;
    }
}   
void metodo1(int n){
    int i;
    float ncima=2.2,nbaixo=1.3,total=1;

    for(i=0;i<n;i++){
        total*=(ncima/nbaixo);
        ncima+=2.2;
        nbaixo=2.2;
    }
    printf("%f",total*2);
}
void metodo2(int n){
    int i,nbaixo=3,contador;
    float total=1;
    for(i=0;i<n;i++){
        if (contador%2==0){
            total+=(1.0/nbaixo);
        }else{
            total-=(1.0/nbaixo);
        }
        nbaixo+=2;

    }
    printf("%f",total*4);
}
void metodo3(int n){
    int i;
    float total=0;
    for(i=1;i<=n;i++){
        total+=(1.0/(i*i));
    }
    total=((pow(total,1.0/2.0))*6); //repete o comando com -lm
    printf("%f",total);
}
void metodo4(int n){
    int i;
    float total=0;
    for(i=1;i<=n;i++){
        total+=(1.0/i*i*i*i);
    }
    total=pow(total,1.0/4.0);
    total=total*90;
    printf("%f",total);
}
