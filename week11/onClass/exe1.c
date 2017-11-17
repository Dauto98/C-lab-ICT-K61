#include<stdio.h>

int main(){
  int a[3];

  for(int i = 0; i < 3; i++){
    printf("Enter value number %d: ", i);
    scanf("%d", &a[i]);
  };

  int *ptr;
  for(int i = 0; i < 3; i++){
    ptr = &a[i];
    printf("ptr = a[%d] -> *ptr = %d\n", i, *ptr);
  }
}
