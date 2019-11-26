/* PROGRAMA 01
#include <stdio.h>
int main(void){
    int x = 42;
    int y = x;
    int* pt = &x;
    printf("x = %d\n",x);
    printf("&x = %d\n",&x);
    printf("y = %d\n",y);
    printf("&y = %d\n",&y);
    printf("pt = %d\n",pt);
    printf("&pt = %d\n",&pt);
    printf("*pt = %d\n",*pt);
    return 0;
}
Este programa declara duas váriavéis, e um ponteiro. O ponteiro
recebe o endereço da var x. Após isso é impresso o valor de x
, o endereço de memoria de x, o valor de y, o endereçoo de memoria
de y, o endereço que ele aponta, o endereço do ponteiro
e por ultimo, o conteudo do endereço que ele aponta, nesse caso
valor de x*/

/* PROGRAMA 02
********************************************************

#include <stdio.h>
int main(void){
    int x = 42;
    int y = x;
    int* pt = &x;
    x = x + 11;
    printf("x = %d\n",x);
    printf("&x = %d\n",&x);
    printf("y = %d\n",y);
    printf("&y = %d\n",&y);
    printf("pt = %d\n",pt);
    printf("&pt = %d\n",&pt);
    printf("*pt = %d\n",*pt);
    return 0;
}
Este programa declara duas váriavéis, e um ponteiro. O ponteiro
recebe o endereço da var x. o valor de x é aumentado em 11. 
Após isso é impresso o valor de x,o endereço de memoria de x,
o valor de y, o endereçoo de memoria
de y, o endereço que ele aponta, o endereço do ponteiro
e por ultimo, o conteudo do endereço que ele aponta, nesse caso
valor de x, que passou de 42 para 53*/

/* PROGRAMA 03
********************************************************

#include <stdio.h>
int main(void){
    int x = 42;
    int y = x;
    int* pt = &x;
    y = y + 11;
    printf("x = %d\n",x);
    printf("&x = %d\n",&x);
    printf("y = %d\n",y);
    printf("&y = %d\n",&y);
    printf("pt = %d\n",pt);
    printf("&pt = %d\n",&pt);
    printf("*pt = %d\n",*pt);
    return 0;
}
O programa 3 é bem parecido com o primeiro, porém agora o valor de y 
é 53.


*/
/* PROGRAMA 04
********************************************************

#include <stdio.h>
int main(void){
    int x = 42;
    int y = x;
    int* pt = &x;
    *pt = *pt + 11;
    printf("x = %d\n",x);
    printf("&x = %d\n",&x);
    printf("y = %d\n",y);
    printf("&y = %d\n",&y);
    printf("pt = %d\n",pt);
    printf("&pt = %d\n",&pt);
    printf("*pt = %d\n",*pt);
    return 0;
}
    Neste programa as coisas começam a ficam mais interessantes,
como a mudança ocorre no *pt, o valor de x é alterado, pois pt é
um ponteiro. A diferença nos prints é que o valor de x é 53 e o
valor impresso quando *pt é o valor de x atualizado.
*/
/* PROGRAMA 05
******************************************************** 
#include <stdio.h>
int main(void){
    int x = 42;
    int y = x;
    int* pt = &x;
    pt = pt + 11;
    printf("x = %d\n",x);
    printf("&x = %d\n",&x);
    printf("y = %d\n",y);
    printf("&y = %d\n",&y);
    printf("pt = %d\n",pt);
    printf("&pt = %d\n",&pt);
    printf("*pt = %d\n",*pt);
    return 0;
}
Esse programa tem um diferencial bem legal! A adição de 11 que acontece
não é em um valor, e sim em no endereço de memoria onde o pt aponta
o que quer dizer que ele aponta para 11 endereços a frente, se, por acaso
x fosse um vetor, ele apontaria 11 valores para frente naquele vetor,
 no caso mostrado não tem como saber qual valor será impresso como 
 valor de onde x aponta, visto que não dá pra saber nem ao certo
 o endereço onde ele está apontando
*/
/* PROGRAMA 06
******************************************************** 
#include <stdio.h>
void inc(int x){
    x = x + 1;
}
int main(void){
    int x = 42;
    inc(x);
    printf("%d\n",x);
    return 0;
}
Este programa declara uma variável x com valor de 42 e, após isso,
chama uma função que adiciona um em x. no final imprime o valor de x,
que sera 42, pois o valor foi passado por passagem de valor e não 
por referencia.
*/
/* PROGRAMA 07
*******************************************************
#include <stdio.h>
void inc(int* x){
    *x = *x + 1;
}
int main(void){
    int x = 42;
    inc(&x);
    printf("%d\n",x);
    return 0;
}
Este programa faz o mesmo que o anterior, entretanto, ele usa
ponteiros ( passagem pro referencia), o que faz com que o valor 
de x que é alterado na função é alterado na main, e imprime o valor
43.
*/
AGORA COMEÇA A LISTA 2
/*
Q1
int* uniao(int *x1, int *x2, int n1, int n2, int *qtd){
    int i,j,q=0;
    int v[5],*pv;
    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
            if(x1[i]==x2[j]){
                *qtd++;
            }
        }
    }
    v= malloc(*qtd * sizeof(int));
    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
            if(x1[i]==x2[j]){
               v[q]=x1[i];
               q++; 
            }
        }
    }
    pv = &v[];
    return pv;
}
Q2
int* interseccao(int *x1, int *x2, int n1, int n2, int *qtd{
int i,j,q=0;
    int v[5],*pv;
    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
            if(x1[i]==x2[j]){
                *qtd++;
            }
        }
    }
    v= malloc(*qtd * sizeof(int));
    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
            if(x1[i]==x2[j]){
               v[q]=x1[i];
               q++; 
            }
        }
    }
    pv = &v[];
    return pv;
}
Q3
#include <stdio.h>
#include <stdlib.h>
int* funcao(int* v,int q);
int main(){
    int nelementos,i,*v;
    scanf("%d",&nelementos);
    v = malloc(nelementos*(sizeof(int)));
    funcao(v,nelementos);
    for(i=0;i<nelementos;i++)
        printf("%d/t",v[i]);

}
int* funcao(int* v,int q){
    int i;
    for(i=0;i<q;i++){
        scanf("%d",&v[i]);
    }
    return v;
}
Q4

#include <stdio.h>
void main(){
    int i=34,j; 
    int *p;
    p = &i;
    *p++;
    j = *p + 33;
    printf("%d %d",*p,j);
}
O programa declara 3 variáveis, i de valor 34, j que vem com lixo e o ponteiro p. 
p recebe o endereço de i e começa a apontar pra ele, depois disso o endereço de p é aumentado em 1
que no caso começa a apontar pra j, logo após isso J recebe o valor que p aponta, que é o lixo de j +33

Q5

#include <stdio.h>

void main(){
    int i=7, j=5;
    int *p;
    int **q;
    p = &i;
    q = &p;
    c = **q + j;  
}
Ao final da execução p aponta para o valor de i (7), q aponta para q, ou seja, vetor de vetor
e c recebe o valor que o ponteiro que q aponta, no caso p aponta para 7, somado com o valor de j
ficando 7+5 = 13=c. nota: C não está declarado! 
Q6

#include <stdio.h>

void main(){
    int a=5, b=12, c=5;
    int *p;
    int *q;
    p = &a;
    q = &b;
    (*p)++;
    c = *p + *q; 
}O valor das variáveis no final é o seguinte: a=6, pois ((*p)++). b vale 12 e c vale a soma
 do valor que p aponta(6) e o valor que q aponta(12) 6+12=18
Q7
#include <stdio.h>
#define Y 2
#define X 2
int main(int argc, char *argv[]){ //Recebe argumento
    int **A;// declara um ponteiro de ponteiro
    int i,j;
    A = (int**)malloc(Y * sizeof(int*)); // A recebe a quantidade Y de tamanho de inteiros
    for(i = 0; i < Y; i++) 
        A[i] = (int*)malloc(X * sizeof(int)); //cada slot de A recebe X tamanhos.
    for(i = 0; i < Y; i++)
        for(j = 0; j < X; j++)
            A[i][j]=i+j;     
    for(i = 0; i < Y; i++)
        for(j = 0; j < X; j++)
            printf(%d \t”,A[i][j]);
    for(i = 0; i < Y; i++)
        free(A[i]); // libera o espaço de memoria de todos os X slots de cada slot de A
    free(A); //Libera o "vetor" que A havia se transformado na linha anterior
    return 0;
}
*/