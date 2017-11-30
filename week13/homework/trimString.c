#include <stdio.h>
#include <ctype.h>
#include <string.h>

char *trimLeft(char *arr) {
	while (isspace(*arr)) {
		arr++;
	};
	return arr;
}

void trimRight(char arr[]) {
	int length = strlen(arr), i = 0;
	while (length - i > 0 && isspace(arr[length - i - 1])) {
		i++;
	};
	arr[length - i - 1] = '\0';
}

void trimMiddle(char arr[]) {
	int i,x;
	for(i=x=0; arr[i]; ++i) {
		if(!isspace(arr[i]) || (i>0 && !isspace(arr[i-1]))) {
			arr[x++] = arr[i];
		};
	};
	arr[x] = '\0';
}

int main() {
	char string[100];

	printf("Enter the string: ");
	scanf("%[^\n]s", string);

	printf("String before: |%s|\n", string);

	char *string1 = trimLeft(string);
	printf("String after trim left: |%s|\n", string1);

	trimRight(string1);
	printf("String after trim right: |%s|\n", string1);

	trimMiddle(string1);
	printf("String after trim middle: |%s|\n", string1);

	return 0;
}
