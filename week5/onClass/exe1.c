#include<stdio.h>

int main(){
  float c, f;
  
  printf("Enter a temperature in C: ");
  scanf("%f", &c);

  printf("Converted to F: %.2f\n", (c*9/5)+32);
  
  printf("Enter a temperature in F: ");
  scanf("%f", &f);

  printf("Converted to C: %.2f\n", (f-32)*5/9);

  return 0;
}
