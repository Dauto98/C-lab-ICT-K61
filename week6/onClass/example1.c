#include<stdio.h>

int main(){
  int num1, num2;

  printf("Enter 2 integers, and I will tell you\n");
  printf("the relationships the satisfy: ");
  scanf("%d%d", &num1, &num2);

  if (num1 == num2) {
    printf("%d is equal to %d\n", num1, num2);
  };

  if (num1 != num2) {
    printf("%d is not equal to %d\n", num1, num2);
  };

  if (num1 > num2) {
    printf("%d is greater than to %d\n", num1, num2);
  };

  if (num1 < num2) {
    printf("%d is smaller than to %d\n", num1, num2);
  };

  if (num1 >= num2) {
    printf("%d is greater than or equal to %d\n", num1, num2);
  };

  if (num1 <= num2) {
    printf("%d is smaller than or equal to %d\n", num1, num2);
  }

  return 0;
}