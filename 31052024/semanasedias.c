#include <stdio.h>

int main(void){
    //printf("Digite o n�mero de dias:");
    int dias, semanas, diasSoltos;
    scanf("%d", &dias);
    semanas = dias/7;
    diasSoltos = dias%7;
    //printf("%d semanas e %d dias", semanas, diasSoltos);
    printf("%d %d", semanas, diasSoltos);
}
