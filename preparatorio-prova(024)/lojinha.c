#include <stdio.h>

#define MAXPROD 10

void clear(){
    #if defined(__linux__) || defined(__unix__) || defined(__APPLE__)
        system("clear");
    #endif

    #if defined(_WIN32) || defined(_WIN64)
        system("cls");
    #endif
}

int main(){
  int caso, i;
  int stay = 1;
  int codProd[MAXPROD];
  float precoProd[MAXPROD];
  char descProd[MAXPROD][50];

  do {
    printf("O que deseja fazer? Linde!!!\n");
    printf("[0] Sair\n");
    printf("[1] Cadastrar\n");
    printf("[2] Ver produtos\n");
    scanf("%d", &caso);

    switch(caso){
      case 0:
        stay = 0;
      break;
      case 1:
        printf("Codigo do produto: ");
        scanf("%d", &codProd[i]);
        printf("Preco do produto: ");
        scanf("%f", &precoProd[i]);
        printf("Descricao do produto: ");
        scanf("%c", &descProd[i]);
        i++;
      break;
    }
  } while(stay != 0);
  clear();
  printf("Valeu cria, tmj");
}