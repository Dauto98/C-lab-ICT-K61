#include<stdio.h>

int is_prime(int n);

void main(){
  int n;
  printf("Enter a positive integer: ");
  scanf("%d", &n);

  while(n <= 0) {
    printf("The number must be positive, retype: ");
    scanf("%d", &n);
  };

  for(int i = 2; i <= n; i++){
    if(is_prime(i)) {
      printf("%d\n", i);
    };
  };
}

int is_prime(int n) {
  for(int i = 2; i < n; i++){
    if(n % i == 0) {
      return 0;
    };
  };
  return 1;
}
