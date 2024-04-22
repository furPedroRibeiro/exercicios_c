#include <stdio.h>
#include <stdlib.h>

void alterarVetor(float vetor[], int tamanho){
    float *ponteiro;
    float *ultimoVetor = vetor+tamanho;

     for (ponteiro = vetor; ponteiro < ultimoVetor; ponteiro++) {
     *ponteiro = 6;
   }

 }

 int main(int argc, char const *argv[]) {
 float vetorOrigem[4]={0.2,0.1,0.0,0.1};

  alterarVetor(vetorOrigem, 4);


  for (int i = 0; i < 4; i++) {
  printf("Vetor: %0.1f ", vetorOrigem[i]);
 }
 return 0;
 }