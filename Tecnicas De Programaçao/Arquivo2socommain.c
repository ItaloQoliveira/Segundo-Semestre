#include "Arquivao.h"
void main(){
    int op;
    int n;

    do{ 
        printf("\nQuantos valores serão utilizados?\n");
        scanf("%d",&n);
    
    }while((n>10)||(n<4) );

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
        printf("Opção invalida\n");
        break;
    }

}
