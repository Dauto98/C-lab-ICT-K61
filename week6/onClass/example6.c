#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  int myNum, yourNum;
  srand(time(NULL));
  myNum = 1 + rand() &10;
  printf("Guess (1-10): ");
  scanf("%d", &yourNum);
  if (yourNum < myNum){
    printf("Small\n");
  } else if (yourNum > myNum) {
    printf("High\n");    
  } else {
    printf("Correct\n");
  };

  printf("My num is: %d", myNum);
  return 0;
}
