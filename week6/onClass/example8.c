#include<stdio.h>

int main(){
  const int airSpeed = 1100;
  const int waterSpeed = 4900;
  const int steelSpeed = 16400;

  int selection;
  float distance;

  printf("Choose the evn: (1-air; 2-water; 3-steel): ");
  scanf("%d", &selection);

  while (selection != 1 && selection != 2 && selection != 3) {
    printf("Incorrect environment code, re type: ");
    scanf("%d\n", &selection);
  };

  printf("Enter the distance: ");
  scanf("%f", &distance);

  printf("The sound will travel in %.2fs\n", distance / (selection == 1 ? airSpeed : (selection == 2 ? waterSpeed : steelSpeed)));

  return 0;
}
