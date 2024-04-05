#include <stdio.h>

int main(void){
  int a,b,c;
  scanf("%d %d %d", &a, &b, &c);

  if(!((b+c) > a && (a+b) > c && (a+c) > b)){
    printf("Invalido");
  } else if(a!=b && a!=c && b!=c){
    printf("Escaleno");
  } else if((a==b && a!=c) || (b==c && b!=a) || (a==c && a!=b)){
    printf("Isosceles");
  } else if(a==b && b==c){
    printf("Equilatero");
  }
}