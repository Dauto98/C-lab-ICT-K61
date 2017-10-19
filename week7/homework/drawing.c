#include <stdio.h>

int main() {
	int n;
	printf("Enter a number as size: ");
	scanf("%d", &n);

	//print a square
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == 0 || i == n - 1) {
				printf("%-2s", "*");
			} else {
				if (j == 0 || j == n - 1) {
					printf("* ");
				} else {
					printf("  ");
				};
			};
		};
		printf("\n");
	};

	printf("\n\n");

	//print Z
	for (int i = 0; i < n; i++) {
		if (i == 0 || i == n - 1) {
			for (int j = 0; j < n; j++) {
				printf("%-2s", "*");
			};
		} else {
			printf("%*s", (n-i)*2-1, "*");
		};
		printf("\n");
	};

	printf("\n\n");

	//print X
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (j == i || j == n - i - 1) {
				printf("%-2s", "*");
			} else {
				printf("  ");
			};
		};
		printf("\n");
	};

	printf("\n\n");

	//print X in square
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == 0 || i == n - 1) {
				printf("%-2s", "*");
			} else {
				if (j == 0 || j == n - 1) {
					printf("* ");
				} else if (j == i || j == n - i - 1) {
					printf("%-2s", "*");
				} else {
					printf("  ");
				};
			};
		};
		printf("\n");
	};

	return 0;
}
