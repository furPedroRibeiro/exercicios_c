#include <stdio.h>

int main(){
  int x, numAnterior=0, numAtual=1, soma;
  scanf("%i", &x);
  if(x>0){
    printf("0\n");
    while(soma<=(x+1)){
      printf("%i\n", numAtual);
      soma = numAnterior + numAtual;
      numAnterior = numAtual;
      numAtual = soma;
    }
  }
  printf("%i\n", soma);
}