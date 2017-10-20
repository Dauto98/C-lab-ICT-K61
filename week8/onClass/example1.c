#include<stdio.h>

#define PERIOD '.'

int main(){
  char c;
  while((c = getchar()) != PERIOD) {
    putchar(c);
  };
  printf("Goodbye\n");

  return 0;
}
