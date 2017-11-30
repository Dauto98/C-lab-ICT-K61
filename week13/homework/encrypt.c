#include <stdio.h>
#include <string.h>

void encrypt(char arr[], int step) {
	for (size_t i = 0, length = strlen(arr); i < length; i++) {
		arr[i] = (char)(((int)arr[i] + step) > 122 ? ((step - 122 + (int)arr[i]) % 26 + 97) : ((int)arr[i] + step));
	};
}

void decrypt(char arr[], int step) {
	for (size_t i = 0, length = strlen(arr); i < length; i++) {
		arr[i] = (char)(((int)arr[i] - step) < 97 ? (122 - (step + 97 - (int)arr[i]) % 26) : ((int)arr[i] - step));
	};
}

int main() {
	char inputString[100];
	int encryptStep;

	printf("Enter the string: ");
	scanf("%s", inputString);

	printf("Enter encrypt distance: ");
	scanf("%d", &encryptStep);

	encrypt(inputString, encryptStep);
	printf("The encrypted string: %s\n", inputString);

	decrypt(inputString, encryptStep);
	printf("The decrypted string: %s\n", inputString);

	return 0;
}
