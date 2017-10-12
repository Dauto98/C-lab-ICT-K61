#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
	long int myNumber, winnerNumber;

	printf("Enter your lottery number: ");
	scanf("%ld", &myNumber);

	srand(time(NULL));
	winnerNumber = rand() % 999999;
	printf("The winning number is: %06ld\n", winnerNumber);

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

	return 0;
}
