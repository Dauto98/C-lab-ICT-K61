#include <stdio.h>

int main(){
	float tempC[10];
	int index = 0, option;

	printf("Convert C to F\n");

	while (1) {
		printf("\n\tMenu\n");
		printf("1 - new temp\n");
		printf("2 - convert\n");
		printf("3 - quit\n");
		printf("Enter an option: ");
		scanf("%d", &option);

		while(option != 1 && option != 2 && option != 3) {
			printf("Please choose the correct option: ");
			scanf("%d", &option);
		};

		if (option == 1) {
			printf("Enter new temp: ");
			scanf("%f", &tempC[index]);
			index++;
		} else if (option == 2) {
			printf("Convert C table to F: \n");
			printf("%5s\n", "C");
			for (int i = 0; i <  index; i++) {
				printf("%10.2f", tempC[i]);
			};
			printf("\n");
			printf("%5s\n", "F");
			for (int i = 0; i < index; i++) {
				printf("%10.2f", tempC[i] * 1.8 + 32.0);
			};
			printf("\n");
		} else if (option == 3) {
			printf("Goodbye\n");
			break;
		}
	}

	return 0;
}
