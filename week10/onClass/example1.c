#include<stdio.h>

int main(){
  const int arraySize = 10;

  int s[arraySize];
  int i;

  for(i = 0; i < arraySize; i++){
    s[i] = 2 + 2*i;
  };

  printf("Element \t Value\n");
  for(i = 0; i < arraySize; i++){
    printf("%d\t%d\n", i, s[i]);
  };

  return 0;
}
