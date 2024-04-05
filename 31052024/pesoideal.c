#include <stdio.h>

int main(void){
  float s, a, p;
  scanf("%f %f", &a, &s);

  if(s==1){
    p = (62.1 * a)-44.7;
  } else{
    p = (72.7 * a)-58;
  }
  printf("%f", p);
}