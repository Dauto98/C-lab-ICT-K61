#include<stdio.h>

int isLeapYear(int year) {
	if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
		return 1;
	} else {
		return 0;
	};
}

int main(){
  int month, year;

  printf("Enter the month: ");
  scanf("%d", &month);

  printf("Enter the year: ");
  scanf("%d", &year);

  switch (month) {
	  case 1 : case 3 : case 5 : case 7 : case 8 : case 10 : case 12 : printf("31 days\n"); break;
	  case 4 : case 6 : case 9 : case 11 : printf("30 days\n"); break;
	  case 2 : {
			if (isLeapYear(year)) {
				printf("29 days\n");
				break;
			} else {
				printf("28 days\n");
				break;
			}
		};
  };

  return 0;
}
