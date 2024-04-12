#include <stdio.h>

int main(){
  float contNotaAlta=0, contNotaBaixa=0, contNotas=0;
  float nota, mediaGeral, notaMaiorIgualACinco;
  
  while(nota>=0){
    scanf("%f", &nota);

    if(nota<0){
      break;
    }
    if(nota<5){
      contNotaBaixa+=1;
      contNotas+=1;
      mediaGeral+= nota;
    }
    if(nota>=5){
      contNotaAlta+=1;
      contNotas+=1;
      mediaGeral+= nota;
    }
  }
  mediaGeral = mediaGeral/contNotas;

  notaMaiorIgualACinco = (contNotaAlta/contNotas)*100;

  printf("%2f %2f %2f %2f",contNotaAlta, contNotaBaixa, mediaGeral, notaMaiorIgualACinco);
}