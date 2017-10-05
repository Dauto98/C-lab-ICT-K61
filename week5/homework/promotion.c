#include<stdio.h>

int main(){
  const int ipodPrice = 148;
  const int ipadPrice = 288;
  const int threshold = 1020;

  int ipod, ipad, discounted = 0;
  float total;

  printf("Enter the number of ipod: ");
  scanf("%d", &ipod);
  ipod >= 3 ? discounted += 1 : (discounted = 0);

  printf("Enter the number of ipad: ");
  scanf("%d", &ipad);
  ipad >= 2 ? discounted += 1 : (discounted = 0);

  (ipod*ipodPrice + ipad*ipadPrice) > threshold ? discounted = 2 : 1;
  total = ipod*ipodPrice + ipad*ipadPrice;
  
  printf("\tBILL DETAIL\n");
  printf("Product           Number       Price           Pay\n");
  printf("__________________________________________________\n");
  printf("Ipod                %d           %d            %ld\n", ipod, ipodPrice, (long)ipod*ipodPrice);
  printf("Ipad                %d           %d            %ld\n", ipad, ipadPrice, (long)ipad*ipadPrice);
  discounted == 2 ? printf("You get 10%% discount\n") : 1;
  printf("Pay: $%.0f\n", discounted == 2 ? (total*0.9) : total);

  return 0;
}
