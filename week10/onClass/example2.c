#include<stdio.h>

int main(){
  const int MONTHS = 12;
  int sum = 0;
  int rainfall[MONTHS];
  
  for(int i = 0; i < MONTHS; i++){
    printf("Enter the rainfall(mm) for month %d: ", i+1);
    scanf("%d", &rainfall[i]);
    sum += rainfall[i];
  };

  printf("%20s%20s", "Month", "Rainfall(mm)\n");
  for(int i = 0; i < MONTHS; i++){
    printf("%18d%18d\n", i, rainfall[i]);
  }
  printf("The total rainfall of the year: %d\n", sum);
  
  return 0;
}
