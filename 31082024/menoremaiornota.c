#include<stdio.h>
int main (){
int N, x=0, y=10000000;

    while(N>=0){
    scanf("%i", &N);

    if(N>=x){
        x = N;
    }if ((N>=0) && (N<y)) {
        y = N;

    }else if(N<0){
        break;
    }

    }
    printf("%i %i", x, y);

}