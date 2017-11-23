#include <stdio.h>
#include <stdlib.h>

int *rotateArr(int *arr, int *targetArr, int size, int offset){
	for (int i = size - 1, j = 0; i >= 0; i--, j++) {
		if (j < offset || j > size - offset - 1) {
			targetArr[j] = arr[i];
		} else {
			targetArr[i] = arr[i];
		}
	};
}

int main() {
	int size, offset;

	printf("Enter the number of elements in array: ");
	scanf("%d", &size);

	while (size < 0) {
		printf("The number must be positive, retype: ");
		scanf("%d", &size);
	};

	int *a = (int *) malloc(size * sizeof(int));
	int *b = (int *) malloc(size * sizeof(int));


	for (int i = 0; i < size ; i++) {
		printf("Enter the array elements %d: ", i);
		scanf("%d", &a[i]);
	};
	printf("\n");

	printf("Enter offset: ");
	scanf("%d", &offset);

	while (offset < 0 || offset > size/2) {
		printf("The number must be positive and smaller than half the size of the array, retype: ");
		scanf("%d", &offset);
	};

	rotateArr(a, b, size, offset);

	for (size_t i = 0; i < size; i++) {
		printf("%5d", b[i]);
	};
	printf("\n");

	return 0;
}
