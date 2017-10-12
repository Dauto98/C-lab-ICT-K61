#include <stdio.h>
#include <math.h>

int main() {
	double currentX, currentY, targetX, targetY;

	printf("Enter your position on X axis: ");
	scanf("%lf", &currentX);

	printf("Enter your position on Y axis: ");
	scanf("%lf", &currentY);

	printf("Enter target position on X axis: ");
	scanf("%lf", &targetX);

	printf("Enter target position on Y axis: ");
	scanf("%lf", &targetY);

	if (5 * currentX - currentY < 0 && 5 * currentX + currentY > 0 && currentX - 5 * currentY < 0 && currentX + 5 * currentY > 0) {
		printf("You are at the north side of the map\n");
	} else if (5 * currentX - currentY > 0 && 5 * currentX + currentY > 0 && currentX - 5 * currentY < 0 && currentX + 5 * currentY > 0) {
		printf("You are at the northeast side of the map\n");
	} else if (5 * currentX - currentY > 0 && 5 * currentX + currentY > 0 && currentX - 5 * currentY > 0 && currentX + 5 * currentY > 0) {
		printf("You are at the east side of the map\n");
	} else if (5 * currentX - currentY > 0 && 5 * currentX + currentY > 0 && currentX - 5 * currentY > 0 && currentX + 5 * currentY < 0) {
		printf("You are at the southeast side of the map\n");
	} else if (5 * currentX - currentY > 0 && 5 * currentX + currentY < 0 && currentX - 5 * currentY > 0 && currentX + 5 * currentY < 0) {
		printf("You are at the south side of the map\n");
	} else if (5 * currentX - currentY < 0 && 5 * currentX + currentY < 0 && currentX - 5 * currentY > 0 && currentX + 5 * currentY < 0) {
		printf("You are at the southwest side of the map\n");
	} else if (5 * currentX - currentY < 0 && 5 * currentX + currentY < 0 && currentX - 5 * currentY < 0 && currentX + 5 * currentY < 0) {
		printf("You are at the west side of the map\n");
	} else if (5 * currentX - currentY < 0 && 5 * currentX + currentY < 0 && currentX - 5 * currentY < 0 && currentX + 5 * currentY > 0) {
		printf("You are at the northwest side of the map\n");
	};

	printf("Your distance to the target point is: %.2lf\n", sqrt((targetX - currentX)*(targetX - currentX) + (targetY - currentY)*(targetY - currentY)));

	return 0;
}
