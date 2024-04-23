#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define MAXDADOS 150
//Pedro Luis de Alencar Ribeiro
//155590852
int main(){
    float dadoIsolado;
    float dados[MAXDADOS];
    int numDados;
    int caso;

    do{
        scanf("%d", &caso);
    }while(caso<0 && caso>6);

    switch(caso){
        case 1:
            for(int i=0;i<MAXDADOS;i++){
                scanf("%f", &dadoIsolado);
                if(dadoIsolado != 0){
                    dados[i] = dadoIsolado;
                }
                if(dadoIsolado == 0){
                    printf("%d", i);
                    numDados = i;
                    break;
                }
            }
        break;
        case 2:
            for(int i=0;i<MAXDADOS;i++){
                scanf("%f", &dadoIsolado);
                if(dadoIsolado != 0){
                    dados[i] = dadoIsolado;
                } else if(dadoIsolado==0){
                    numDados = i;
                    for(int i=(numDados-1); i>=0;i--){
                        printf("%.2f\n", dados[i]);
                    }
                    break;
                }
            }
        break;
        case 3:
            for(int i=0;i<MAXDADOS;i++){
                scanf("%f", &dadoIsolado);
                if(dadoIsolado != 0){
                    dados[i] = dadoIsolado;
                } else if(dadoIsolado==0){
                    numDados = i;
                    float somaDados = 0;
                    for(int i=0; i<=numDados;i++){
                        somaDados+=dados[i];
                    }
                    float media = somaDados/numDados;
                    printf("%.2f", media);
                    break;
                }
            }
        break;
        case 4:
            for(int i=0;i<MAXDADOS;i++){
                scanf("%f", &dadoIsolado);
                if(dadoIsolado != 0){
                    dados[i] = dadoIsolado;
                } else if(dadoIsolado==0){
                    numDados = i;
                    float somaDados;
                    for(int i=0; i<=numDados;i++){
                        somaDados+=dados[i];
                    }
                    float media = somaDados/numDados;
                    printf("%.2f\n", media);
                    float somatoria=0;
                    float diferenca=0;
                    float desvioSemRaiz=0;
                    float desvioFinal=0;
                    for(int i=0; i<numDados;i++){
                        diferenca = (dados[i]-media);
                        somatoria += pow(diferenca, 2);
                    }
                    desvioSemRaiz = somatoria/numDados;
                    desvioFinal = sqrt(desvioSemRaiz);
                    printf("%.2f", desvioFinal);
                    break;
                }
            }
        break;
        case 5:
            for(int i=0;i<MAXDADOS;i++){
                scanf("%f", &dadoIsolado);
                if(dadoIsolado != 0){
                    dados[i] = dadoIsolado;
                } else if(dadoIsolado==0){
                    numDados = i;
                    float somaDados;
                    for(int i=0; i<=numDados;i++){
                        somaDados+=dados[i];
                    }
                    float media;
                    media=somaDados/numDados;
                    for(int i = 0;i<numDados; i++){
                        printf("%.2f ", fabs(fabs(dados[i])-fabs(dados[0])));
                        printf("%.2f\n", fabs(fabs(dados[i])-fabs(media)));
                    }
                    break;
                }
            }
        break;
        case 6:
            for(int i=0;i<MAXDADOS;i++){
                scanf("%f", &dadoIsolado);
                if(dadoIsolado != 0){
                    dados[i] = dadoIsolado;
                } else if(dadoIsolado==0){
                    numDados = i;
                    char str[10];
                    sprintf(str, "%.3f", dados[0]);
                    for(int i=0; i<strlen(str); i++){
                        if(str[i]!='.'){
                            printf("%c", str[i]);
                        }
                        if(str[i]== '.'){
                            printf("%c", '@');
                        }
                    }
                    break;
                }
            }
        break;
    }
}
