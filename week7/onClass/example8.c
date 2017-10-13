#include<stdio.h>

int main(){
  int n, total = 1;

  printf("Enter number n: ");
  scanf("%d", &n);

  for(int i = 1; i <= n; i++){
    total = total*i;
  };

  printf("!%d = %d\n", n, total);
}
