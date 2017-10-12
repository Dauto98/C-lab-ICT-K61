#include <stdio.h>

int main() {
	double a, b, c;
	char operator;

	printf("Enter the fomular: ");
	scanf("%lf%c%lf", &a, &operator, &b);

	if ((int)operator == 43) {
		c = a + b;
	} else if (operator == 45) {
		c = a - b;
	} else if (operator == 42) {
		c = a * b;
	} else if (operator == 47) {
		c = a / b;
	} else {
		printf("Invalid operator\n");
		return 0;
	};

	printf("RESULT: %0.2lf\n", c);

	return 0;
}
