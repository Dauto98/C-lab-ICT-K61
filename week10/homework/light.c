#include <stdio.h>

int light[5][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}};

int main() {
	int option;

	while (1) {
		printf("\n\tMenu\n");
		printf("1 - Switch the light in row\n");
		printf("2 - Switch the light in column\n");
		printf("3 - Switch the light in specific position\n");
		printf("4 - Consumption power in the current time\n");
		printf("5 - Quit\n");
		printf("Enter an option: ");
		scanf("%d", &option);

		while(option != 1 && option != 2 && option != 3 && option != 4 && option != 5) {
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
				light[row - 1][i] = light[row - 1][i] ? 0 : 1;
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
				light[i][column - 1] = light[i][column - 1] ? 0 : 1;
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

			light[row - 1][column - 1] = light[row - 1][column - 1] ? 0 : 1;
		} else if (option == 4) {
			int sum = 0;
			for (int i = 0; i < 5; i++) {
				for (int j = 0; j < 3; j++) {
					if (light[i][j]) {
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
