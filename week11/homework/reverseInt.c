#include <stdio.h>
#include <stdlib.h>

void pushToArray(unsigned int number, unsigned int *arr, int *currentIndex, int *maxSize) {
	// printf("%-5d", *currentIndex);
	// printf("%5d", number);
	// printf("%5d\n", *maxSize);
	if (*currentIndex >= (*maxSize) - 1) {
		arr = realloc(arr, (*maxSize)*2);
		*maxSize = (*maxSize)*2;
	};
	arr[(*currentIndex)] = number;
	(*currentIndex)++;
}

unsigned int toDigitArray(unsigned int number, unsigned int *arr, int *currentIndex, int *maxSize) {
	if (number >= 10) {
		// printf("%-5d", number);
		// printf("%-5d", *currentIndex);
		// printf("%d\n", number/10);
		pushToArray(toDigitArray((number)/10, arr, currentIndex, maxSize), arr, currentIndex, maxSize);
		return (number) % 10;
	} else {
		return number;
	}
}

int power(int number, int exponent) {
	int result = number;
	if (exponent == 0) {
		return 1;
	};
	for (int i = 0; i < exponent - 1; i++) {
		result *= number;
	};
	return result;
}

unsigned int reverseInt(unsigned int number) {
	int currentIndex = 0, maxSize = 4;
	unsigned int *digitArr = (unsigned int *) malloc(maxSize);

	pushToArray(toDigitArray(number, digitArr, &currentIndex, &maxSize), digitArr, &currentIndex, &maxSize);

	unsigned int result = 0;
	for (int i = currentIndex - 1; i >= 0; i--) {
		result += digitArr[i] * power(10, i);
	}
	return result;
}

int main() {
	unsigned int a;
	printf("Enter a positive number: ");
	scanf("%d", &a);

	while (a < 0) {
		printf("The number must be positive, retype: ");
		scanf("%d", &a);
	};

	a = reverseInt(a);

	printf("%d\n", a);

	return 0;
}
