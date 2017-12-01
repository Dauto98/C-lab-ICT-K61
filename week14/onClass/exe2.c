#include<stdio.h>

typedef struct {
  unsigned int day;
  unsigned int month;
  unsigned int year;
} Date;

void inputDate(Date *date) {
  printf("Enter the year: ");
  scanf("%d",&date->year);

  printf("Enter the month: ");
  scanf("%d", &date->month);

  while(date->month > 12) {
    printf("invalid month, retype: ");
    scanf("%d", &date->month);
  };

  printf("Enter the day: ");
  scanf("%d", &date->day);

  if(date->month == 1 || date->month == 3 || date->month == 5 || date->month == 7 || date->month == 8 || date->month == 10 || date->month == 12) {
    while(date->day > 31) {
      printf("Invalid day, retype: ");
      scanf("%d", &date->day);
    }
  } else if(date->month == 4 || date->month == 6 || date->month == 9 || date->month == 11) {
    while(date->day > 30) {
      printf("Invalid day, retype: ");
      scanf("%d", &date->day);
    }
  } else if(date->month == 2 && ((date->year % 4 == 0 && date->year % 100 != 0) || date->year % 400 == 0)) {
    while(date->day > 29) {
      printf("Invalid day, retype: ");
      scanf("%d", &date->day);
    }
  } else {
    while(date->day > 28) {
      printf("Invalid day, retype: ");
      scanf("%d", &date->day);
    }
  }
}

int compareDate(Date date1, Date date2) {
  if(date1.year < date2.year) {
    return -1;
  } else if(date1.year > date2.year) {
    return 1;
  } else if(date1.month < date2.month) {
    return -1;
  } else if(date1.month > date2.month) {
    return 1;
  } else if(date1.day < date2.day) {
    return -1;
  } else if(date1.day > date2.day) {
    return 1;
  } else {
    return 0;
  }
}

int main(){
  Date date1, date2;

  inputDate(&date1);

  inputDate(&date2);

  int result = compareDate(date1, date2);

  if(result == 1) {
    printf("%d/%d/%d is after %d/%d/%d\n", date1.day, date1.month, date1.year, date2.day, date2.month, date2.year);
  } else if(result == -1) {
    printf("%d/%d/%d is before %d/%d/%d\n", date1.day, date1.month, date1.year, date2.day, date2.month, date2.year);
  } else {
    printf("Two dates are identical\n");
  }
}
