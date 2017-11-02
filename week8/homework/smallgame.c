#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
	int target, number, current, nextTurn;

	printf("Small Game\n");

	printf("Enter a target number: ");
	scanf("%d", &target);

	srand(time(NULL));
	int r = rand()%5 + 1;
	printf("Random number: %d\n", r);

	if (r % 2 == 0) {
		printf("Player 2 turn, type a number: ");
		scanf("%d", &number);
		while (number < 0 || number > 5) {
			printf("The chosen number must be > 0 and < 5, type another number: \n");
			scanf("%d", &number);
		};
		r += number;
		printf("Current number: %d\n", r);
		if (r >= target) {
			printf("Player 2 win\n");
		};
		nextTurn = 1;
		current = number % 2;
	} else {
		printf("Player 1 turn, type a number: ");
		scanf("%d", &number);
		while (number < 0 || number > 5) {
			printf("The chosen number must be > 0 and < 5, type another number: \n");
			scanf("%d", &number);
		};
		r += number;
		printf("Current number: %d\n", r);
		if (r >= target) {
			printf("Player 1 win\n");
		};
		nextTurn = 2;
		current = number % 2;
	};

	while (r < target) {
		if (nextTurn == 1) {
			printf("Player 1 turn, type %s number: ", (!current ? "an odd" : "an even"));
			scanf("%d", &number);
			while (number < 0 || number > 5 || number % 2 == current) {
				printf("The chosen number must be > 0, < 5 and %s, type another number: \n", (!current ? "an odd" : "an even"));
				scanf("%d", &number);
			};
			current = number % 2;
			r += number;
			printf("Current number: %d\n", r);
			if (r >= target) {
				printf("Player 1 win\n");
				break;
			};
			nextTurn = 2;
		} else if (nextTurn == 2) {
			printf("Player 2 turn, type %s number: ", (!current ? "an odd" : "an even"));
			scanf("%d", &number);
			while (number < 0 || number > 5 || number % 2 == current) {
				printf("The chosen number must be > 0, < 5 and %s, type another number: \n", (!current ? "an odd" : "an even"));
				scanf("%d", &number);
			};
			current = number % 2;
			r += number;
			printf("Current number: %d\n", r);
			if (r >= target) {
				printf("Player 2 win\n");
				break;
			};
			nextTurn = 1;
		}
	}

	return 0;
}
