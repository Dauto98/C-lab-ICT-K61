#include<stdio.h>

int main(){
  #define regularHour 40
  const int regularEarn = 25000;
  const int overEarn = 40000;

  int workedTime;
  int wage;
  
  printf("Enter your worked time: ");
  scanf("%d", &workedTime);
  if (workedTime > regularHour) {
    wage = regularEarn*regularHour + overEarn*(workedTime - regularHour);
  } else {
    wage = regularEarn*workedTime;
  };

  printf("Wage: %d\n", wage);
}
