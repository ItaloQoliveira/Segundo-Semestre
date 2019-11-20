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
Este programa 
*/
