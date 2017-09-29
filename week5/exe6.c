#include<stdio.h>

int main(){
  int a, b, c;

  printf("Enter a: ");
  scanf("%d", &a);

  printf("Enter b: ");
  scanf("%d", &b);

  printf("Enter c: ");
  scanf("%d", &c);

  printf("Maximum number is: %d\n", a>b ? (a>c ? a : c) : (b>c ? b : c));

  (a+b+c)/3 > 10 ? printf("Sum of a and b: %d\n", a + b) : printf("The difference of b and c: %d\n", b - c);

  return 0;
}
