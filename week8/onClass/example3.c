#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
  long int myNumber, winnerNumber;
  int option;
  
  while(1) {
    printf("\nCHUONG TRINH XO SO MIEN BAC\n");
    printf("\tMENU\n");
    printf("1 - Mua ve\n");
    printf("2 - Quay so\n");
    printf("3 - So ket quar\n");
    printf("4 - Thoat\n");
    printf("Enter an option: ");
    scanf("%d", &option);

    while(option != 1 && option != 2 && option != 3 && option != 4) {
      printf("Please enter the correct option: ");
      scanf("%d", &option);
    };

    if (option == 1) {
      printf("Enter your lottery number: ");
      scanf("%ld", &myNumber);
      printf("You buy %ld\n", myNumber);
    } else if (option == 2) {
      srand(time(NULL));
      winnerNumber = rand() % 999999;
      printf("The winning number is: %06ld\n", winnerNumber);
    } else if (option == 3) {
      if (winnerNumber - myNumber == 0) {
	printf("You get special prize: 3000000000 vnd\n");
      } else if ((winnerNumber - myNumber) % 100000 == 0) {
	printf("You get the 1st prize: 200000000 vnd\n");
      } else if ((winnerNumber - myNumber) % 10000 == 0) {
	printf("You get the 2nd prize: 100000000 vnd\n");
      } else if ((winnerNumber - myNumber) % 1000 == 0) {
	printf("You get the 3rd prize: 10000000 vnd\n");
      } else if ((winnerNumber - myNumber) % 100 == 0) {
	printf("You get the consolation prize: 500000\n");
      } else {
	printf("You lose\n");
      };
    } else if (option == 4) {
      printf("Goodbye\n");
      break;
    };
  };
 
  return 0;
}
