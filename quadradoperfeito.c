#include <stdio.h>

int main(void){
  int n;
  scanf("%i", &n);
  for(int i = 1; i<=n; i++){
    if((i*i)<=n){
      printf("%d\n", (i*i));
    }
  }
}