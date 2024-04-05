#include <stdio.h>
#include <time.h>

void clear(){
    #if defined(__linux__) || defined(__unix__) || defined(__APPLE__)
        system("clear");
    #endif

    #if defined(_WIN32) || defined(_WIN64)
        system("cls");
    #endif
}
 
void delay(int number_of_seconds)
{
    // Converting time into milli_seconds
    int milli_seconds = 1000 * number_of_seconds;
 
    // Storing start time
    clock_t start_time = clock();
 
    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds);
}
void relogio(){
  int hour, minute, second;
  for(int i = 0; i <= 23; i++){
    if(i<=23){
      hour = i;
    } else{
      hour = 0;
    }
    for(int i = 0; i <= 60; i++){
      if(i<=23){
        minute = i;
      } else{
        minute = i;
      }
      for(int i = 1; i <= 60; i++){
        if(i<=23){
          second = i;
        } else{
          second = i;
        }
        printf("%d:%d:%d", hour, minute, second);
        delay(1);
        clear();
      }
    }
  }
} 
int main(void){
  if(1==1){
    relogio();
  }
};