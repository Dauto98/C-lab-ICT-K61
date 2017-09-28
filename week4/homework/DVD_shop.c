#include <stdio.h>

int main() {
	int overnight, threeDay, weekly;
	float totalCost;
	const int overnightCost = 7;
	const int threeDayCost = 5;
	const int weeklyCost = 3;

	printf("How many DVDs you rent overnight: ");
	scanf("%d", &overnight);

	printf("How many DVDs you rent in three day: ");
	scanf("%d", &threeDay);

	printf("How many DVDs you rent weekly: ");
	scanf("%d", &weekly);

	totalCost = overnight*overnightCost + threeDay*threeDayCost + weekly*weeklyCost;

	printf("\
  You rent: \n\
\tovernight: %d\n\
\tthreeDay: %d\n\
\tweekly: %d\n\
	\n\
  Total cost: $%.2f\n",\
overnight, threeDay, weekly, totalCost);

	return 0;
}
