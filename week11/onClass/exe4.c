#include<stdio.h>

void rotate(int *x, int *y, int *z){
  int temp = *z;
  *z = *y;
  *y = *x;
  *x = temp;
}

int main(){
  int a = 1, b = 2, c = 3;

  printf("a: %d\nb: %d\nc: %d\n", a, b, c);
  
  rotate(&a, &b, &c);
  
  printf("a: %d\nb: %d\nc: %d\n", a, b, c);
}
