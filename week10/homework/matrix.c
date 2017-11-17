#include <stdio.h>

int m, n;

int isSymmetric(int matrix[][n]) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (matrix[i][j] != matrix[j][i]) {
				return 0;
			};
		};
	};
	return 1;
}

void printMatrix(int matrix[][n]) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			printf("%5d", matrix[i][j]);
		};
		printf("\n");
	};
}

int main() {

	printf("Enter the number of row: ");
	scanf("%d", &m);

	while (m <= 0) {
		printf("The number of row must be positive: ");
		scanf("%d", &m);
	}

	printf("Enter the number of column: ");
	scanf("%d", &n);

	while (m <= 0) {
		printf("The number of column must be positive: ");
		scanf("%d", &n);
	}

	if (n != m) {
		printf("The matrix is not symmetric\n");
		return 9;
	}

	int matrix[m][n];

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			printf("Enter the value at row %d, column %d: ", i+1, j+1);
			scanf("%d", &matrix[i][j]);
		}
	}

	if (isSymmetric(matrix)) {
		printf("The matrix is symmetric\n");
	} else {
		printf("The matrix is not symmetric\n");
	}

	printMatrix(matrix);

	return 0;
}
