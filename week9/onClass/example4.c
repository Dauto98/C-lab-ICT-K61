#include<stdio.h>

float CtoF(float c);

float FtoC(float f);

int chooseConversion();

void main(){
  float start, end, step;
  int conversion = chooseConversion();
  
  printf("Enter start temp: ");
  scanf("%f", &start);

  printf("Enter end temp: ");
  scanf("%f", &end);

  printf("Enter step: ");
  scanf("%f", &step);

  if(conversion) {
    for(int i = start; i <= end; i += step){
      printf("")
    }
  }
}

int chooseConversion(){
  int conversion;
  printf("Choose conversion: 1 - C->F; 2 - F->C: ");
  scanf("%d", &conversion);
  while(conversion != 1 && conversion != 2) {
    printf("Please enter the correct option: ");
    scanf("%d", &conversion);
  };
  return conversion == 1 ? 0 : 1;
}
