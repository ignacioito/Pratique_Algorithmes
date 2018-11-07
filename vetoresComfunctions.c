#include <stdio.h>
#include<stdlib.h>
#define max 10


ordenar(tab[], tab1[], tab2[]){
  
}



int main() {
//variáveis
 int vetA[max],vetB[max],vetC[max];
 int cont;
//inicialização
 printf("informe 10 numeros inteiros:");
  printf("valores do vetor 1");
 //preenchendo o priemiro vetor
 for(cont=0; cont<10; cont++){
  printf("\nvalor %i = ", cont+1); //indica a posição
   scanf("%i", &vetA[cont]);
   }
 printf("\n");
printf("valores do vetor 2");
//preenchendo o segundo vetor
 for(cont=0; cont<10; cont++){
    printf("\nvalor %i = ", cont+1); //indica a posição
   scanf("%i", &vetB[cont]);
}
printf("\n");
//preenchendo o terceiro vetor com maior valor de cada vetor
 for(cont=0; cont <10; cont++){
  if(vetA[cont] > vetB[cont]){
        vetC[cont]=vetA[cont];} else { vetC[cont]=vetB[cont]; }
 }
printf("\nvalores do vetor C");
  printf("\n");
//mostrando o vetorC
 for(cont=0; cont <10; cont++){
  printf("\nvalor %i = ", cont+1); //indica a posição
    printf("%i", vetC[cont]);
 }
return 0;}