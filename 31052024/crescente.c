#include <stdio.h>

int main(void){
  int a,b,c;
  scanf("%d %d %d", &a, &b, &c);

  if(a<b && b<c){
    printf("%d", a);
    printf(" %d ", b);
    printf("%d", c);
  } else if(a<b && c<a){
    printf("%d", c);
    printf(" %d ", a);
    printf("%d", b);
  } else if(b<a && c<b){
    printf("%d", c);
    printf(" %d ", b);
    printf("%d", a);
  } else if(b<c && a<c){
    printf("%d", b);
    printf(" %d ", a);
    printf("%d", c);
  } else if(c<b && a<c){
    printf("%d", a);
    printf(" %d ", c);
    printf("%d", b);
  } else if(b<c && c<a){
    printf("%d", b);
    printf(" %d ", c);
    printf("%d", a);
  }
}