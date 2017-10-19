#include <stdio.h>
#include <math.h>

int main() {
	int stand = 0, lie = 0, old = 0;

	printf("From the problem we have a system of equation: \n");
	printf("x + y + z = 100\n");
	printf("5x + 3y + z/3 = 100\n");
	printf("with x: standing buffalos, y: lying buffalos, z: old buffalos\n");
	printf("we change it to: \n");
	printf("x + y + z = 100\n");
	printf("    y + 7z/3 = 200\n");
	printf("x + y = 100 - z\n");
	printf("    y = 200 - 7z/3\n");
	printf("we have to find z such that y is a natural number <= 0\n");

	for (int i = 45; i < 85; i += 3) {
		if (trunc(7*i/3) == 7*i/3 && (100 - i - 200 + (7*i/3)) > 0) {
			printf("The number of standing buffalos: %d\n", 100 - i - 200 + (7*i/3));
			printf("The number of lying buffalos: %d\n", 200 - (7*i/3));
			printf("The number of old buffalos: %d\n", i);
			printf("\n");
		};
	};

	return 0;
}
