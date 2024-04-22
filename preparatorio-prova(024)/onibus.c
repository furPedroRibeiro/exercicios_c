#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAXPARADAS 10

int main(){
  int paradas;
  
  int total_de_passageiros = 0;
  float media;

  do{
  printf("Numero de paradas:");
  scanf("%d", &paradas);
  } while(paradas<0);

  int qtd_passageiros_no_onibus[MAXPARADAS];
  int numero_da_parada[MAXPARADAS];
  int pessoas_entraram[MAXPARADAS];
  int pessoas_sairam[MAXPARADAS];
  int total_pessoas_sairam=0;

  int onibus_lotado = 0;

  for(int i=0; i<paradas; i++){
    printf("Numero da parada: Pessoas que entraram: Pessoas que sairam:\n");
    scanf("%d %d %d", &numero_da_parada[i+1], &pessoas_entraram[i], &pessoas_sairam[i]);
    total_pessoas_sairam += pessoas_sairam[i];
    qtd_passageiros_no_onibus[i] = (pessoas_entraram[i]+total_de_passageiros)-total_pessoas_sairam;
    total_de_passageiros += pessoas_entraram[i];
  }
  int maiorValorDePassageiros=0;
  int menorValorDePassageiros = qtd_passageiros_no_onibus[0];
  for (int i = 0; i < paradas; i++)
  {
    if(qtd_passageiros_no_onibus[i]>maiorValorDePassageiros){
      maiorValorDePassageiros = qtd_passageiros_no_onibus[i];
    }
    if(qtd_passageiros_no_onibus[i]!=0 && qtd_passageiros_no_onibus[i]<menorValorDePassageiros){
      menorValorDePassageiros = qtd_passageiros_no_onibus[i];
    }
  }
  int total_de_passageiros_por_ponto=0;
  for (int i = 0; i < paradas; i++)
  {
    printf("Parada: %d Passageiros: %.2d \n",(i+1) ,qtd_passageiros_no_onibus[i]);
    total_de_passageiros_por_ponto += qtd_passageiros_no_onibus[i];
  }
  media=(total_de_passageiros_por_ponto/paradas);
  
  for (int i = 0; i < paradas; i++)
  {
    if(qtd_passageiros_no_onibus[i]==maiorValorDePassageiros){
      onibus_lotado = (i+1);
    }
  }
  

  printf("Maior quantidade: %d ", maiorValorDePassageiros);
  printf("Menor quantidade: %d ", menorValorDePassageiros);
  printf("Ponto com mais passageiros: %d ", onibus_lotado);
  printf("Media: %.2f", media);
}