#include<stdio.h>

int main(){
  const int myHeight = 183;
  
  int age[2], height[2], point[2];

  printf("The 1st girl: \n");
  printf("Enter your age: ");
  scanf("%d", &age[0]);
  printf("Enter you height: ");
  scanf("%d", &height[0]);

  age[0] <= 16 ? 1 : (age[0] < 21 ? point[0] += 5 : (point[0] += 2));
  height[0] >= myHeight ? point[0] -= 1 : (height[0] < myHeight - 30 ? point[0] -= 2 : (point[0] += 3));

  printf("\nThe 2nd girl: \n");
  printf("Enter your age: ");
  scanf("%d", &age[1]);
  printf("Enter you height: ");
  scanf("%d", &height[1]);

  age[1] <= 16 ? 1 : (age[1] < 21 ? point[1] += 5 : (point[1] += 2));
  height[1] >= myHeight ? point[1] -= 1 : (height[1] < myHeight - 30 ? point[1] -= 2 : (point[1] += 3));

  point[0] < point[1] ? printf("I'll have a date with the 2nd girl\n") : (point[0] > point[1] ? printf("I'll have a date with the 1st girl\n") : printf("I'll will have a date with both of you\n"));

  return 0;
}
