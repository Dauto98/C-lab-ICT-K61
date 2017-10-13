#include<stdio.h>

int main(){
  char c;
  int count;

  for(count = 0; (c=getchar() != '.'); count++){};

  printf("The number of letter typed is %d\n", count);

  return 0;
}
