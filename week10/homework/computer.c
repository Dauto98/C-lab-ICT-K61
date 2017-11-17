#include <stdio.h>

int computer[4][10] = {{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0}{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}};

void chooseComputer(col, row) {
	if (computer[row][col] == 0) {
		computer[row][col] = 1;
		printf("computer %d-%d turned on\n", row, col);
	} else {
		printf("computer already turned on\n");
	}
}

void quitComputer(col, row) {
	if (computer[row][col] == 1) {
		computer[row][col] = 0;
		printf("computer %d-%d turned off\n", row, col);
	} else {
		printf("computer already turned off\n");
	}
}

void printComStatus() {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 10; j++) {
			printf("%5d", computer[i][j]);
		}
		printf("\n");
	}
}

void printEachConsumption(/* arguments */) {
	/* code */
}

void printtTotalConsumption(/* arguments */) {
	/* code */
}

void mostAndLestUsedCom(/* arguments */) {
	/* code */
}



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
			printf("Enter computer'col: ");
			scanf("%d", &col);
			while (col < 1 || col > 10) {
				printf("Invalid col, retype: ");
				scanf("%d\n", &col);
			};

			printf("Enter computer'row: ");
			scanf("%d", &row);
			while (row < 1 || row > 4) {
				printf("Invalid row, retype: ");
				scanf("%d\n", &row);
			};
			chooseComputer(col, row);
		} else if (option == 2) {
			printf("Enter computer'col: ");
			scanf("%d", &col);
			while (col < 1 || col > 10) {
				printf("Invalid col, retype: ");
				scanf("%d\n", &col);
			};

			printf("Enter computer'row: ");
			scanf("%d", &row);
			while (row < 1 || row > 4) {
				printf("Invalid row, retype: ");
				scanf("%d\n", &row);
			};
			quitComputer(col, row);
		} else if (option == 3) {
			printComStatus()
		} else if (option == 4) {
			printEachConsumption()
		}	else if (option == 5) {
			printtTotalConsumption()
		} else if (option == 6) {
			mostAndLestUsedCom()
		} else if (option == 7) {
			printf("Goodbye\n");
			break;
		};
	};

	return 0;
}
