#include<stdio.h>

int main(){
  const long int regularCar = 0.7;
  const long int overtimeCar = 2.5;

  const long int regularBus = 1.5;
  const long int overtimeBus = 2.0;

  const long int regularTruck = 2.5;
  const long int overtimeTruck = 3.25;

  int option, type;
  float parkTime, total;

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
      scanf("%f", &parkTime);
      if (type == 1) {
        total = parkTime > 2 ? ((parkTime - 2)*overtimeCar + 2*regularCar) : (parkTime * regularCar);
      } else if (type == 2) {
        total = parkTime > 2 ? ((parkTime - 2)*overtimeBus + 2*regularBus) : (parkTime * regularBus);
      } else if (type == 3) {
        total = parkTime > 1 ? ((parkTime - 1)*overtimeTruck + 2*regularTruck) : (parkTime * regularTruck);
      };
      printf("\tPAYMENT REQUEST\n");
      printf("Vehicle type: %s\n", (type == 1 ? "Car" : (type == 2 ? "Bus" : "Truck")));
      printf("Time: %.2f\n", parkTime);
      printf("Payment: %.2f\n", total);
    } else if (option == 2) {
      printf("Goodbye\n");
      break;
    };
  }
}
