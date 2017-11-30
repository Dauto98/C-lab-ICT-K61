#include <stdio.h>
#include <ctype.h>
#include <string.h>

int checkValidPlateNumber(char arr[]) {
	if (strlen(arr) != 11) {
		return 0;
	}
	if (arr[2] != '-' && arr[8] != '.') {
		return 0;
	}
	if (!((arr[0] == '2' && arr[1] == '9') || (arr[0] == '3' && (arr[1] == '0' || arr[1] == '1' || arr[1 == '2'])))) {
		return 0;
	};
	if (!isalpha(arr[3]) || !isdigit(arr[4]) || !isdigit(arr[5]) || !isdigit(arr[6]) || !isdigit(arr[7]) || !isdigit(arr[9]) || !isdigit(arr[10])) {
		return 0;
	};
	return 1;
}

int main() {
	char plate[50];
	int option;

	while (1) {
		printf("MENU\n");
		printf("1 - Enter a number plate and check\n");
		printf("2 - Quit\n");

		scanf("%d", &option);

		while (option != 1 && option != 2) {
			printf("Enter 1 or 2 for option: ");
			scanf("%d", &option);
		};

		if (option == 1) {
			printf("Enter a plate number: ");
			scanf("%s", plate);

			printf("Result: %s\n", checkValidPlateNumber(plate) ? "valid" : "invalid");
		} else if (option == 2) {
			printf("Bye\n");
			break;
		};
	}

	return 0;
}
