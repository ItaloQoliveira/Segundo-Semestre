/*Nome: Italo Queiroz de Oliveira
  Ra: 2144042 */
#include <stdio.h>
#include <math.h>
void calcula_hexagono(float l, float *area, float *perimetro);

int main(){
    float lado,area,perimetro;
    printf("Insira o valor do lado:");
    scanf("%f",&lado);
    calcula_hexagono(lado,&area,&perimetro);
    printf("\nO hexagono de lado %.2f tem uma area de %.2f e um perimetro de %.2f!",lado,area,perimetro);
    return 0;
}
void calcula_hexagono(float l, float *area, float *perimetro){
    *area = (((3*(l*l)) * sqrt(3))/2);
    *perimetro = (l*6);
}