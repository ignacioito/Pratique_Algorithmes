# Pratique_Algorithmes
Repo crée pour la pratique de la programmation et apprentissage des concepts étudiés


tenho uma duvida sobre o uso de vetor com função, estou aprendendo agora o uso da linguagem C:
 gostaria de saber com seria a resolução da seguinte questão:
"Construir um programa que lê dois vetores A e B de 10 valores inteiros cada, Criar um vetor C que armazena os maiores i-ésimos valores de cada vetor."
Minha duvida seria sobre resolver este problema com o uso de funções, onde a parte em que a ordenação o vetorC seria resolvido em outra função e ela deveria ser 
retornar o vetorC já com os maiores valores e mostrar na tela...

resolução da questão apenas com o uso da função main:
#include <stdio.h>
#define max 10
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
