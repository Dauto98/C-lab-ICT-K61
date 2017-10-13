#include<stdio.h>

int main(){
  for(int i = 0; i < 10; i++){
    printf("%-10d%d\n", i, i*i);
  };

  return 0;
}
