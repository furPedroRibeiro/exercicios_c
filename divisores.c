#include <stdio.h>

int main(void){
  int x;

  scanf("%d", &x);

  for(int i = 1; i<=x; i++){
    if(x % i == 0){
      printf("%d\n", i);
    }
  }
}