#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

void preenche(int v[], int tam){
    int i,j,n,x;
    i=0;
    while(i<=tam){
        x=rand() /100;
        n=0;
        for(j=0;j<i;j++){
            if((v[j])==x){
                n=1;
                j=i+1;
            }
            if(n==0){
                v[i]=x;
                i++;
            }
        }
    }
}