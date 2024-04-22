#include <stdio.h>;

int main(){
  float vetorA[5]={0,0,0,0,0}, vetorB[5]={0,0,0,0,0}, vetorS[5];
  forReadVector(vetorA, 5);
  forReadVector(vetorB, 5);

  for(int i=0;i<5;i++){
    vetorS[i] = vetorA[i] + vetorB[i];
  }
  for(int i=0;i<5;i++){
    printf("%.2f \n", vetorS[i]);
  }
}
void forReadVector(float vetor[], int tamanho){
  float *ponteiro;
  int *ultimo_vetor = vetor+tamanho;
  float valor;
  for(ponteiro = vetor; ponteiro < ultimo_vetor; ponteiro++){
    scanf("%f", &valor);
    *ponteiro = valor;
  }
}