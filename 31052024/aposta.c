#include <stdio.h>

int main(void){
    float x, y, z, premio, invest;

    float xporcent, yporcent, zporcent;


    scanf("%f", &premio);
    scanf("%f %f %f", &x, &y, &z);

    invest = x+y+z;

    xporcent = (x/invest) * premio;
    yporcent = (y/invest) * premio;
    zporcent = (z/invest) * premio;

    printf("%f %f %f", xporcent, yporcent, zporcent);
}