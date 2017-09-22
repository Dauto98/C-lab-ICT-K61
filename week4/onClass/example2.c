#include<stdio.h>

int main(){
  int d, m, y, x;
  char ch1, ch2;
  float f;
  
  printf("1: ");
  scanf("%d", &d);
  printf("2: ");
  scanf("%2d%2d%4d", &d, &m, &y);
  printf("3: ");
  scanf("%c%c", &ch1, &ch2);
  printf("4: ");
  scanf("%f", &f);
  printf("%c, %c\n", ch1, ch2);
  printf("%d, %d, %d\n", d, m, y);


  return 0;
}
