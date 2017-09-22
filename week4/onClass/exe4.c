#include<stdio.h>

int main(){
  const int costA = 15;
  const int costB = 12;
  const int costC = 9;

  int ticketA, ticketB, ticketC;
  float income, finalIncome;

  printf("Enter number of class A ticket: ");
  scanf("%d", &ticketA);

  printf("Enter number of class B ticket: ");
  scanf("%d", &ticketB);

  printf("Enter number of class C ticket: ");
  scanf("%d", &ticketC);

  income = ticketA*costA + ticketB*costB + ticketC*costC;
  finalIncome = income*0.95;

  printf("Income: %.2f\n", income);
  printf("Income after VAT: %.2f\n", finalIncome);

  return 0;
}
