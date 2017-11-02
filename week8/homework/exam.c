#include <stdio.h>

int main(){
	int option, result, pass = 0, fail = 0;

	while (1) {
		printf("\n\tMenu\n");
    printf("1 - new student result\n");
    printf("2 - summary\n");
    printf("3 - quit\n");
    printf("Enter an option: ");
    scanf("%d", &option);

    while(option != 1 && option != 2 && option != 3) {
      printf("Please choose the correct option: ");
      scanf("%d", &option);
    };

		if (option == 1) {
			printf("Enter new student result (1 - pass, 2 - fail): ");
			scanf("%d", &result);
			while(result != 1 && result != 2) {
				printf("Please choose the correct option: ");
				scanf("%d", &result);
			};
			if (result == 1) {
				pass++;
			} else {
				fail++;
			};
			printf("This student %s the exam\n", result == 1 ? "passes" : "fails");
		} else if (option == 2) {
			printf("Summary\n");
			printf("Pass: %d\n", pass);
			printf("Fail: %d\n", fail);
		} else if (option == 3) {
			printf("Goodbye\n");
      break;
		}
	}

	return 0;
}
