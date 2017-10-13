#include<stdio.h>

int main(){
  int c = 0. n;

  while(true) {
    printf("Menu\n\t1- Enter n\n\t2-List perfect number\n\t3-List prime number\n\t4-list n's divisors\n\t5-exit\n");
    printf("What do you want: ");
    scanf("%d", &c);
    if (c == 1) {
      printf("Enter number n: ");
      scanf("%d", &n);
      printf("You entered %d, back to menu\n", n);
    } else if (c == 2) {
      int sum = 0;
      for(int i = 1; i < n; i++){
	if(n % i == 0){
	  sum += i;
	};
	if(sum == n) {
	  printf("perfect number");
	} else {
	  printf("Not a perfect number");
	};
      };
    } else if (c == 3) {
      int a = (int)trunc(sqrt(n));
      //printf("%-3d%d\n", i, a);
      for(j = 2; j <= a; j++){
	if(i % j == 0){
	  break;
	 };
      };
      if(j > a) {
	printf("%-3d\n", i);
      };
    } else if (c == 4) {
      for(int i = 1; i < n; i++){
	if(n % i == 0) {
	  printf("%4d", i);
	};
	printf("\n")
	  };
    } else if (c == 5) {
      break;
    };
  }
}
