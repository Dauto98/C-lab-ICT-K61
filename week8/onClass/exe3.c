#include<stdio.h>

int main(){
  const long int regularCar = ;
  const long int overtimeCar = ;
  
  const long int regularBus = ;
  const long int overtimeBus = ;

  const long int regularTruck = ;
  const long int overtimeTruck = ;

  while(1) {
    printf("\n\tMenu\n");
    printf("1 - new payment\n");
    printf("2 - quit\n");
    printf("Enter an option: ");
    scanf("%d", &option);

    while(option != 1 && option != 2) {
      printf("Please choose the correct option: ");
      scanf("%d", &option);
    };

    if (option == 1) {
      printf("Enter vehicle type (1 - car, 2 - bus, 3 - truck): ");
      scanf("%d", &type);
      while(type != 1 && type != 2 && type != 3) {
	printf("Please enter the correct type: ");
	scanf("%d", &type);
      };

      printf("Enter the time in hour: ");
      scanf("%f", &time);
      if (type == 1) {
	total = 
      } else if (type == 2) {
	
      } else if (type == 3) {
	
      };
    } else if (option == 2) {
      printf("Goodbye\n");
      break;
    };
  }
}
