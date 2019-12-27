/*Nome: Italo Queiroz de Oliveira
  Ra: 2144042 */
#include <stdio.h>
char S(float p1, float p2, float p3, int faltas, int aulas, float *M);
int main (){
    float p1,p2,p3,media;
    int faltas,aulas;
    char retorno;
    printf("Insira valor da prova 1:");
    scanf("%f",&p1);
    printf("Insira valor da prova 2:");
    scanf("%f",&p2);
    printf("Insira valor da prova 3:");
    scanf("%f",&p3);
    printf("Insira o número de faltas:");
    scanf("%d",&faltas);
    printf("Insira o número de aulas totais:");
    scanf("%d",&aulas);
    retorno=S(p1,p2,p3,faltas,aulas,&media);
    printf("\nMédia do Aluno: %.1f\n",media);
    if(retorno == 'A'){
        printf("ALUNO APROVADO\n");        
    }
    if(retorno == 'R'){
        printf("ALUNO REPROVADO\n");
    }
    if(retorno == 'F'){
        printf("ALUNO REPOVADO POR FALTAS\n");
    }

}
char S(float p1, float p2, float p3, int faltas, int aulas, float *M){
    char situacao;
    *M = ((p1 + p2 + p3) / 3);
    if ((*M >= 6) && (faltas <= (0.25 * aulas))){
     situacao = 'A';
    }
    if (*M < 6){
       situacao = 'R';
    }
    if (faltas > (0.25 * aulas)){
     situacao = 'F';
    }
    return situacao;
}
