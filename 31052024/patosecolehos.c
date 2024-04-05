#include <stdio.h>

//Em um cercado, há vários patos e coelhos. Escreva um programa que solicite ao usuário o total de cabeças e o total de pés, e determine quantos patos e quantos coelhos se encontram nesse cercado.

//x => patos
//y => coelhos
//x => numcabecas/2 - numpes/2
//y => numpes/4 - x

int main(){
  int numCabecas, numPes;
  int patos, coelhos;

  scanf("%d %d", &numCabecas, &numPes);

  patos = (2*numCabecas)-(numPes/2);
  coelhos = (numPes/2)-numCabecas;

  // printf("O número de patos é: %d e o número de coelhos é: %d", patos, coelhos);
  printf("%d %d", patos, coelhos);
}