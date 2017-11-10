#include <stdio.h>

int allEven(int number) {
	if ((number % 10) % 2) {
		return 0;
	} else {
		if ((number / 10) != 0) {
			allEven(number / 10);
		} else {
			return 1;
		}
	}
}

int allOdd(int number) {
	if (((number % 10) % 2) == 0) {
		return 0;
	} else {
		if ((number / 10) != 0) {
			allOdd(number / 10);
		} else {
			return 1;
		}
	}
}

int main() {
	int number;

	printf("Enter the number: ");
	scanf("%d", &number);

	if (allEven(number)) {
		printf("All the figures of %d is even\n", number);
	} else if (allOdd(number)) {
		printf("All the figures of %d is odd\n", number);
	} else {
		printf("Not all the figures of %d are even or odd\n", number);
	};

	return 0;
}
