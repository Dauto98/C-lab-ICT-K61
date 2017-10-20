#include<stdio.h>

int main(){
  char c;
  int inspace = 0;

  while((c = getchar()) != EOF) {
    if(c == ' ' && inspace == 0) {
      inspace = 1;
      putchar(c);
    } else if (c != ' ') {
      inspace = 0;
      putchar(c);
    };
  };

  return 0;
}
