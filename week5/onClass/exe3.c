#include<stdio.h>

int main(){
  float distance;

  printf("Enter a distance in km: ");
  scanf("%f", &distance);

  printf("The distance in mile is: %.2f\n", distance/1.6);

  return 0;
}
