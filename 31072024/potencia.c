#include <stdio.h>

int main(void){
  float x, y;
  scanf("%f %f", &x, &y);
  float result = x;

  for(int i = 1; i<y; i++){
    result = result*x;
  }
  printf("%f", result);
}