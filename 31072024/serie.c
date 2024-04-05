#include <stdio.h>

int main(void){
  float x = 1, result = 1;
  for(int i = 2; i<=50; i++){
    x = x+2;
    result += x/i;
  }
  printf("%f", result);
}