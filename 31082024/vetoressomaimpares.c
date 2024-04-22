#include <stdio.h>;

int main(){
  int vetor[10], soma=0;
  for(int i=0; i < 10; i++){
    scanf("%d", &vetor[i]);
  }
  for(int i=1; i<10; i+=2){
    soma += vetor[i];
  }
  printf("%d", soma);
}