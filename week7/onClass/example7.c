#include<stdio.h>

int main(){
  float f;
  long int cash;
  char name[30];
  int month;
  long int totalProfit;
  
  printf("Enter your name: ");
  scanf("%[^\n]s", name);

  printf("How many month you want: ");
  scanf("%d", &month);

  printf("How much money: ");
  scanf("%ld", &cash);

  printf("With which interest: ");
  scanf("%f", &f);

  printf("Tài khoản khách hàng: %s\n", name);
  printf("Tháng        Tiền đầu kỳ           Tiền lãi          Số dư\n");
  for(int i = 1; i < month; i++){
    long int profit = (long int)(cash*f*0.01);
    totalProfit = totalProfit + profit;
    printf("%2d%20ld%20ld%20ld\n", i, cash, profit, cash+profit);
    cash = cash + profit;
  };
  printf("Total profit: %ld\n", totalProfit);
}
