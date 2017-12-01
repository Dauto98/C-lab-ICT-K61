#include<stdio.h>
#include<stdlib.h>

typedef struct {
  unsigned int day;
  unsigned int month;
  unsigned int year;
} Date;

typedef struct {
  char id[6];
  char name[31];
  float grade;
  Date birth;
  char classement;
} Student;

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

void inputStudent(Student *student) {
  printf("Enter student id: ");
  scanf("%s", student->id);

  printf("Enter student name: ");
  scanf("%*c%[^\n]s", student->name);

  printf("Enter student birthday\n");
  inputDate(&student->birth);

  printf("Enter student's grade: ");
  scanf("%f", &student->grade);

  if(student->grade < 6.5) {
    student->classement = 'D';
  } else if (student->grade < 8) {
    student->classement = 'C';
  } else if (student->grade < 9) {
    student->classement = 'B';
  } else {
    student->classement = 'A';
  };
}

void swapStudent(Student **student1, Student **student2) {
  Student *temp = *student1;
  *student1 = *student2;
  *student2 = temp;
}

void softStudentArray(Student *arr[], int length) {
  int max;
  for(int i = 0; i < length; i++) {
    max = i;
    for(int j = i+1; j < length; j++) {
      if(arr[j]->grade > arr[max]->grade) {
	max = j;
      } else if (arr[j]->grade == arr[max]->grade && compareDate(arr[j]->birth, arr[max]->birth) == -1) {
	max = j;
      };
    }
    swapStudent(&arr[i], &arr[max]);
  };
}

void printStudents(Student *arr[], int length) {
  for(int i = 0; i < length; i++) {
    printf("%8s|%30s|%2d/%2d/%d|%5.2f|%3c\n", arr[i]->id, arr[i]->name, arr[i]->birth.day, arr[i]->birth.month, arr[i]->birth.year, arr[i]->grade, arr[i]->classement);
  };
}


int main(){
  Student *stuArr[4];

  for(int i = 0; i < 4; i++) {
    stuArr[i] = malloc(sizeof(Student));
    printf("\nEnter data for student %d\n", i+1);
    inputStudent(stuArr[i]);
  };

  printf("\n");
  printStudents(stuArr, 4);

  softStudentArray(stuArr, 4);

  printf("\n");
  printStudents(stuArr, 4);

  return 0;
}


