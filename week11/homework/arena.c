#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Player {
	double strength;
	double agility;
	double health;
};

void initStat(struct Player *player) {
	printf("Enter strength: ");
	scanf("%lf", &(player->strength));

	while (player->strength <= 0) {
		printf("Strength must be positive: ");
		scanf("%lf", &(player->strength));
	}

	printf("Enter agility: ");
	scanf("%lf", &(player->agility));

	while (player->agility <= 0) {
		printf("Agility must be positive: ");
		scanf("%lf",&(player->agility));
	}

	printf("Enter health: ");
	scanf("%lf", &(player->health));

	while (player->health <= 0) {
		printf("Health must be positive: ");
		scanf("%lf", &(player->health));
	}
}

void increaseStat(struct Player *player, int win) {
	double coef;
	if (win) {
		coef = 1.2;
	} else {
		coef = 1.1;
	};
	player->strength *= coef;
	player->agility *= coef;
	player->health *= coef;
}

void createPlayers(struct Player *arr, int length) {
	for (int i = 0; i < length; i++) {
		printf("Enter stat for player %d\n", i + 1);
		initStat(&arr[i]);
	};
}

void arena(struct Player *arr, int roundFight) {
	int winner = rand() % 2;
	printf("Rougn %d, match 1-2, the winner is %d, the loser is %d\n", roundFight, winner == 0 ? 1 : 2, winner == 0 ? 2 : 1);
	increaseStat(&arr[winner], 1);
	increaseStat(winner == 0 ? &arr[1] : &arr[0], 0);

	winner = rand() % 2;
	printf("Rougn %d, match 2-3, the winner is %d, the loser is %d\n", roundFight, winner == 0 ? 2 : 3, winner == 0 ? 3 : 2);
	increaseStat(&arr[winner + 1], 1);
	increaseStat(winner == 0 ? &arr[2] : &arr[1], 0);

	winner = rand() % 2;
	printf("Rougn %d, match 3-1, the winner is %d, the loser is %d\n", roundFight, winner == 0 ? 3 : 1, winner == 0 ? 1 : 3);
	increaseStat(&arr[winner == 0 ? 2 : 0], 1);
	increaseStat(winner == 0 ? &arr[0] : &arr[2], 0);

	printf("\n");
}

void printCurrentStat(struct Player *arr, int length) {
	for (int i = 0; i < length; i++) {
		printf("Player %d: \n", i + 1);
		printf("Strength:  %.2lf\n", (arr+i)->strength);
		printf("Agility:  %.2lf\n", (arr+i)->agility);
		printf("Health:  %.2lf\n", (arr+i)->health);
		printf("\n");
	};
}

int main() {
	struct Player player[3];
	int option;
	int roundFight;
	srand(time(NULL));

	createPlayers(player, 3);
	printCurrentStat(player, 3);

	while (1) {
		printf("MENU: \n");
		printf("1 - Fighting\n");
		printf("2 - See player stats\n");
		printf("3 - Quit\n");

		printf("Choose an option: ");
		scanf("%d", &option);

		while (option != 1 && option != 2 && option != 3) {
			printf("Please choose 1 or 2: ");
			scanf("%d", &option);
		};

		if (option == 1) {
			printf("How many round you want to fight: ");
			scanf("%d", &roundFight);

			while (roundFight <= 0) {
				printf("The number must be positive: ");
				scanf("%d", &roundFight);
			}

			for (int i = 0; i < roundFight; i++) {
				arena(player, i + 1);
			}
		} else if (option == 2) {
			printCurrentStat(player, 3);
		} else if (option == 3) {
			printf("Goodbye\n");
			break;
		};
	};

	return 0;
}
