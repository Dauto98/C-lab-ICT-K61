#include<stdio.h>

int main(){
  int date, people, age[3];
  float bill[3];
  char name[100];

  date = 2;
  while (date != 0 && date != 1) {
    printf("Is today weekend?: 1 - weekend, 0 - weekdays: ");
    scanf("%d", &date);
  };
  
  printf("Enter the number of people(<3): ");
  scanf("%d", &people);

  printf("Enter the movie: ");
  scanf("%*c%[^\n]s", name);
  
  for(int i = 0; i < people; i++) {
    printf("Person %d\n", i+1);
    printf("Enter your age: ");
    scanf("%d", &age[i]);
    date == 1 ? (bill[i] = 10) : (bill[i] = 7);
    if (age[i] < 18) {
      bill[i] = bill[i]*0.5;
    } else if (age[i] >= 65) {
      bill[i] = bill[i]*0.7;
    };
  };

  printf("BILL\n");
  printf("movie: %s\n", name);
  printf("date: %s\n", date == 1 ? "weekend" : "weekdays");
  for(int i = 0; i < people; i++) {
    printf("Person %d\n", i);
    printf("Class: %s\n", age[i] < 18 ? "Child" : (age[i] >= 65 ? "Senior citizen" : "Adults"));
    printf("Price: $%.2f\n", bill[i]);
  };

  return 0;
}
