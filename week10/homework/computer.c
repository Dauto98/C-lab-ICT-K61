#include <stdio.h>

int computer[4][10] = {{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0}{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}};

int main() {
	int option;

	while (1) {
		printf("\n\tMenu\n");
		printf("1 - Use a computer\n");
		printf("2 - Quit a computer\n");
		printf("3 - Computer status\n");
		printf("4 - Total consumption on each computer\n");
		printf("5 - Total consumption and billing\n");
		printf("6 - Most used and least used computer\n");
		printf("7 - Quit\n");
		printf("Enter an option: ");
		scanf("%d", &option);

		while(option != 1 && option != 2 && option != 3 && option != 4 && option != 5 && option != 6 && option != 7) {
			printf("Please choose the correct option: ");
			scanf("%d", &option);
		};

		if (option == 1) {
			int row;
			printf("Choose one row: ");
			scanf("%d", &row);

			while (row != 1 && row != 2 && row != 3 && row != 4 && row != 5) {
				printf("Enter from 1 to 5: ");
				scanf("%d", &row);
			}

			for (int i = 0; i < 3; i++) {
				computer[row - 1][i] = computer[row - 1][i] ? 0 : 1;
			}
		} else if (option == 2) {
			int column;
			printf("Choose one column: ");
			scanf("%d", &column);

			while (column != 1 && column != 2 && column != 3) {
				printf("Enter from 1 to 3: ");
				scanf("%d", &column);
			}

			for (int i = 0; i < 5; i++) {
				computer[i][column - 1] = computer[i][column - 1] ? 0 : 1;
			}
		} else if (option == 3) {
			int row, column;
			printf("Choose one column: ");
			scanf("%d", &column);

			while (column != 1 && column != 2 && column != 3) {
				printf("Enter from 1 to 3: ");
				scanf("%d", &column);
			}

			printf("Choose one row: ");
			scanf("%d", &row);

			while (row != 1 && row != 2 && row != 3 && row != 4 && row != 5) {
				printf("Enter from 1 to 5: ");
				scanf("%d", &row);
			}

			computer[row - 1][column - 1] = computer[row - 1][column - 1] ? 0 : 1;
		} else if (option == 4) {
			int sum = 0;
			for (int i = 0; i < 5; i++) {
				for (int j = 0; j < 3; j++) {
					if (computer[i][j]) {
						if (i % 2 == 0 && j % 2 == 0) {
							sum += 20;
						} else if (i % 2 != 0 && j % 2 != 0) {
							sum += 10;
						} else {
							sum += 15;
						}
					};
				};
			};
			printf("Total consumption: %d\n", sum);
		} else if (option == 5) {
			printf("Goodbye\n");
			break;
		};
	};

	return 0;
}
