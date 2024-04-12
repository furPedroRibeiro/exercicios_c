#include <stdio.h>

int main(){
  int anoInicial, anoFinal;

  scanf("%i\n %i\n", &anoInicial, &anoFinal);
  while(anoInicial<=anoFinal){
    if(anoInicial % 400 == 0 || (anoInicial % 4 == 0 && anoInicial % 100 != 0)){
      printf("%i\n", anoInicial);
    }
    anoInicial++;
  }
}