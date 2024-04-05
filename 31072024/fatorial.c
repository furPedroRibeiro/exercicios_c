#include <stdio.h>
int main(void){
  int f;
  int result = 1;
  scanf("%d", &f);

  for(int i = 1; i<f; i++){
    result = result*(i+1);
  }
  printf("%d", result);
}