#include<stdio.h>

int main(){
  int n, j = 1;

  printf("Enter n: ");
  scanf("%d", &n);

  for(int i = n; i > 0; i--){
    for(int j = i - 1; j > 0; j--){
      printf(" ");
    };
    for(int j = 0; j < 2*(n-i+1) - 1; j++){
      printf("*");
    };
    printf("\n");
  };
}
