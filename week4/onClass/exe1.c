#include<stdio.h>

int main(){
  int a;
  double b;

  printf("Enter an integer: ");
  scanf("%d", &a);
  printf("Enter a double: ");
  scanf("%lf", &b);

  printf("%d __ %lf\n", a, b);

  printf("Enter an integer as hex: ");
  scanf("%i", &a);
  printf("Enter a double in scientific notation: ");
  scanf("%le", &b);

  printf("%d __ %lf\n", a, b);
  
}
