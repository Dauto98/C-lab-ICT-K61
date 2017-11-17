#include <stdio.h>
#include <stdlib.h>

int n;

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}


int *inputArray(int *array){
	printf("Enter the number of elements in the array: ");
	scanf("%d", &n);

	while (n <= 0) {
		printf("The number of elements must be positive, retype: ");
		scanf("%d", &n);
	};

	array = (int*) malloc(n * sizeof(int));
	for (int i = 0; i < n; i++) {
		printf("Enter the element number %d: ", i);
		scanf("%d", &array[i]);
	}

	return array;
}

void sort(int *array){
	int min;
	for (int i = 0; i < n - 1; i++) {
		min = i;
		for (int j = i + 1; j < n; j++) {
			if (array[j] < array[i]) {
				min = j;
			}
		};
		swap(&array[min], &array[i]);
	};
}

int count(int *array, int length) {
	int numberCount = 0;
	int i = 0;
	int current = array[0];
	while (array[i] == current && i < length) {
		numberCount++;
		i++;
	};
	printf("The number %d appears %d times\n", current, numberCount);
	if (i < length - 1) {
		count(array + i, length - i - 1);
	};
}

int main() {
	int *array = inputArray(array);
	for (int i = 0; i < n; i++) {
		printf("%d\n", array[i]);
	}
	printf("______\n");
	sort(array);

	for (int i = 0; i < n; i++) {
		printf("%d\n", array[i]);
	}

	count(array, n);

	return 0;
}
