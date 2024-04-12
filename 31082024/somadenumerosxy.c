#include <stdio.h>

int main(){
  int x, y, soma;

  scanf("%i\n %i", &x, &y);
  soma = x;
  if(x<y){
    while(x<y){
      soma += (x+1);
      x++;
    }
  }
  printf("%i", soma);
}