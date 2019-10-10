/*O exemplo de codigo a seguir apresenta:
Funções com retorno-Que volta um valor de uma chamada de função
passagem por valor- é passado o valor da variável
entrada de dados por linha de comando- valor é passado pela chamada do arquivo no console
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
float soma(float,float);
float divisao(float,float);
float multi(float,float);
float subt(float,float);
int main(int tam,char *valor[] ){
    switch (*valor[2]){
    case '+':
        printf("%.2f",soma(atof(valor[1]),atof(valor[3])));
        break;
    case '-':
        printf("%.2f",subt(atof(valor[1]),atof(valor[3])));
        break;
    case 'm':
        printf("%.2f",multi(atof(valor[1]),atof(valor[3])));
        break;
    case '/':
        printf("%.2f",divisao(atof(valor[1]),atof(valor[3])));
        break;
    default:
        printf("\nOpção invalida\n");
        break;
    }

}
float soma(float a,float b){
    return a+b;
}
float subt(float a,float b){
    return a-b;
}
float multi(float a,float b){
    return a*b;
}
float divisao(float a,float b){
    return a/b;
}
/* Exemplo função sem retorno
uma função sem retorno n volta valor, apenas faz as ações nela
fonte:
https://www.clubedohardware.com.br/forums/topic/1253934-fun%C3%A7%C3%B5es-sem-passagem-de-par%C3%A2metros-e-sem-retorno/
    */
void pesoideal(){
 float altura;
 char sexo, continuar = 'x';
 float ideal;
do{
        printf("escreva a altura x.xx\n\n");
    scanf(" %f",&altura);

    printf("e escreva o sexo m/f :\n\n");
    scanf(" %s",&sexo);

         switch ( sexo )
  {
     case 'm' :
     	ideal = altura * 72.7; 
		ideal = ideal - 58;
       printf("seu peso ideal é %.3f kg\n\n",ideal);
     break;

     case 'f' :
     	ideal = altura * 62.1; 
		ideal = ideal - 58;
       printf("seu peso ideal é %.3f kg\n\n",ideal);
     break;

     default :
       printf (" sexo invalido!\n\n");

  }
printf("deseja continuar? s/n\n");
scanf(" %c", &continuar);}
while (continuar == 's');
}

int main(){

pesoideal();

return 0;
}
/* Passagem de valor por referencia. é passado o endereço da memoria, logo, será alterado o valor mesmo fora do escopo
fonte:https://www.ime.usp.br/~elo/IntroducaoComputacao/Funcoes%20passagem%20de%20parametros.htm
*/
void complexo2 (float *r, float *t);

int main () 
{
   float a, b;

   printf ("Entre com um numero complexo (2 numeros inteiros): ");
   scanf("%f %f", &a, &b);
   complexo2 ( &a, &b);
   printf("O quadrado do número complexo é %f + i %f\n", a, b);

   system("pause");
   return 0;
}
void complexo2 (float *r, float *t)
{
   float real;

   real = (*r * *r) - (*t * *t);
   *t = 2 * *r * *t;
   *r = real;
} 
/*O fragmento de codigo a seguir vai ser ultizado para demonstar o typedef
typedef é utilizado para criar um apelido (alias), para um certo tipo. Usualmente utilizado
na forma demonstrada a seguir


    */

typedef struct structdemonstrativa {
    float exmp;
    char nome[50];

} apelido;

/* O codigo a seguir demonstra uso de outras coisas como:
FILE-Define que o ponteiro sera utilizado para um arquivo
fopen-Abre o arquivo escolhido no metodo escolido, nesse caso R de read
fscanf-Lê determinada coisa de um arquivo
fclose-fecha o arquivo e para de trabalhar com ele
eof- caracter do final do arquivo

*/
float soma(float,float);
float divisao(float,float);
float multi(float,float);
float subt(float,float);
int main(){
    char varArquivo,operador;
    float v1,v2;
    FILE *arg;
    arg=fopen("/home/italo/SegundoSemestre/Segundo-Semestre/TecnicasDeProgramacao/arquivostxt/arqcalc.txt","r");
    varArquivo= fscanf(arg,"%f %c %f",&v1,&operador,&v2);
    while(varArquivo!=EOF){    
        
        switch (operador){
            case '+':
                printf("%.1f%c%.1f= %.1f\n",v1,operador,v2,soma((v1),(v2)));
                break;
            case '-':
                printf("%.1f%c%.1f= %.1f\n",v1,operador,v2,subt((v1),(v2)));
                break;
                case '*':
                printf("%.1f%c%.1f= %.1f\n",v1,operador,v2,multi((v1),(v2)));
                break;
            case '/':
                printf("%.1f%c%.1f= %.1f\n",v1,operador,v2,divisao((v1),(v2)));
                break;
            default:
                printf("\nOpção invalida\n");
                break;
        }
        varArquivo= fscanf(arg,"%f %c %f",&v1,&operador,&v2);
    }

    fclose(arg);

    
}
float soma(float a,float b){
    return a+b;
}
float subt(float a,float b){
    return a-b;
}
float multi(float a,float b){
    return a*b;
}
float divisao(float a,float b){
    return a/b;
}

/*O exemplo a seguir coletado do moodle demonstra:
Utilização do fprintf- printf só que pra file
    
    */
int main () {
   FILE * fp;

   fp = fopen ("file.txt", "w+");
   fprintf(fp, "%s %s %s %d", "Oi", "hoje", "eh", 10062019);
   
   fclose(fp);
   
   return(0);
}
/*O codigo a seguir retirado do moodle demonstra
fseek - função que controla o ponteiro do arquivo, deslocando ele. 
    */
int main () {
   FILE *fp;

   fp = fopen("file.txt","w+");
   fputs("Este e um exemplo de fseek", fp);
  
   fseek( fp, 7, SEEK_SET );
   fputs(" --- este trecho de texto foi deslocado (offset) 7 caracteres a partir do inicio", fp);

   fseek( fp, 7, SEEK_CUR );
   fputs(" *** posição corrente do arquivo", fp);

   fseek( fp, 7, SEEK_END);
   fputs(" +++ final do arquivo", fp);

    fclose(fp);
   
   return(0);
}


/*O fragmento de codigo retirado do moodle demonstra
fgets- função gets mais avançada e recomendada, decide a entrada e pode ser um arquivo, como no exemplo a baixo
null- nulo, quando o arquivo não tem nada
    */
int main(){
  FILE *pont_arq;
  char texto_str[20];
  pont_arq = fopen("origem.txt", "r");
  
  while(fgets(texto_str, 20, pont_arq) != NULL)
     printf("%s", texto_str);
 
  fclose(pont_arq);
 
  return(0);
}

/*O codigo a seguir foi retirado do moodle e demonstra
feof-função que retorna se chegou ou não no final do arquivo('EOF')

    */
int main () {
   FILE *fp;
   int c;
  
   fp = fopen("file.txt","r");
   if(fp == NULL) {
      perror("Erro ao abrir o arquivo");
      return(-1);
   }
   
   while(1) {
      c = fgetc(fp);
      if( feof(fp) ) { 
         break ;
      }
      printf("%c", c);
   }
   fclose(fp);
   
   return(0);
}
/*O codigo a seguir foi retirado do moodle e demonstra:
fputc-Coloca um char, saida definida.

    */
int main () {
   FILE *fp;
   int ch;

   fp = fopen("file.txt", "w+");
   for( ch = 33 ; ch <= 100; ch++ ) {
      fputc(ch, fp);
   }
   fclose(fp);

   return(0);
}

/*O codigo a seguir retirado do moodle demonstra
Malloc-A função malloc aloca um espaço de memória e retorna um ponteiro do tipo void para o início do espaço de memória alocado.
Memset- Define um valor para a memoria escolhida. 
Utilizando um arquivo para gravação
    */
int main () {
  char *src, copia[100],n1[10], op[1] = "\0", ch;
  int soma = 0, num1, i, j, tam;
  FILE *origem, *destino;
  
  origem = fopen("expressoes.txt","w");
  
	i = 1;
  while(1){
		printf("Digite a %da expressao para ser gravada no arquivo (apenas ENTER para finalizar) ",i);
		fflush(stdin);
		gets(copia);
		i = i + 1;
		if(strlen(copia)==0)
			break;
		  else
        fprintf(origem,"%s\n",copia);
	}
  
	fclose(origem);
  
	origem = fopen("expressoes.txt","r");
  destino = fopen("resultados.txt","w"); 
  
	while(!(feof(origem))){	

  	tam = 0;
  	while((ch = fgetc(origem))!= '\n' )
			  tam = tam + 1;	

	  fseek(origem,-(tam+2),SEEK_CUR);

  	src = malloc((tam + 1) * sizeof(char));	

	  fscanf(origem,"%s",src);		

	  tam = strlen(src); 
	  
	  i = 0;    
	  j = 0;
    while(src[i] != '\0'){
      if((src[j] != '+') && (src[j] != '-') && (src[j] != '/') && (src[j] != '*') && (src[j] != '\0')){
		 	  j = j + 1;  
		  }
		  else{
		 	  memset(n1, '\0', sizeof(n1));
        num1 = atoi(strncpy(n1, &src[i], j));
        if(i == 0){
				  soma = num1;
			  }
			  else{
	        switch(op[0]){
			      case '+':
			 	      soma = soma + num1;
			 	      break;
			      case '-':
			 	      soma = soma - num1;
			 	      break;
			      case '*':
			 	      soma = soma * num1;
			 	      break;
			      case '/':
			 	      soma = soma / num1;
			 	      break;
		      }
			  }
			  strncpy(op, &src[j], 1);
        i = j + 1;
        j = i;
		  }
	  }
	  fprintf(destino,"\n%s --> %d \n",src,soma);
	  fprintf(destino,"---------------------------------------");
	  free(src);
	}
	fclose(origem);
	fclose(destino);
	return(0);
}