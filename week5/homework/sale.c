#include<stdio.h>

int main(){
  const unsigned long fridgePrice = 8000000;
  const unsigned long TVPrice = 15000000;
  const unsigned long laptopPrice = 12000000;

  int fridge, TV, laptop;
  unsigned long fridgeProfit, TVProfit, laptopProfit;
  
  printf("Enter fridge sales number: ");
  scanf("%d", &fridge);
  fridgeProfit = fridge*fridgePrice;
  
  printf("Enter TV sales number: ");
  scanf("%d", &TV);
  TVProfit = TV*TVPrice;

  printf("Enter laptop sales number: ");
  scanf("%d", &laptop);
  laptopProfit = laptop*laptopPrice;

  printf("The profit of: \n");
  printf("\tFridge: %ld\n", fridge*fridgePrice);
  printf("\tTV: %ld\n", TV*TVPrice);
  printf("\tLaptop: %ld\n", laptop*laptopPrice);

  printf("The total profit of 3 objects: %ld\n", fridge*fridgePrice + TV*TVPrice + laptop*laptopPrice);

  fridge > TV ? (fridge > laptop ? (TV > laptop ? printf("Highest sales: Fridge\nLowest sales: Laptop\n") : printf("Highest sales: Fridge\nLowest sales: TV\n")) : printf("Highest sales: Laptop\nLowest sales: TV\n")) : (TV < laptop ? printf("Highest sales: Laptop\nLowest sales: fridge\n") : (fridge < laptop ? printf("Highest sales: TV\nLowest sales: fridge\n") : printf("Highest sales: TV\nLowest sales: Laptop\n")));

  fridgeProfit > TVProfit ? (fridgeProfit > laptopProfit ? (TVProfit > laptopProfit ? printf("Highest profit: Fridge\nLowest profit: Laptop\n") : printf("Highest profit: Fridge\nLowest profit: TV\n")) : printf("Highest profit: Laptop\nLowest profit: TV\n")) : (TVProfit < laptopProfit ? printf("Highest profit: Laptop\nLowest profit: fridge\n") : (fridgeProfit < laptopProfit ? printf("Highest Profit: TV\nLowest profit: fridge\n") : printf("Highest profit: TV\nLowest profit: Laptop\n")));

  return 0;
}
