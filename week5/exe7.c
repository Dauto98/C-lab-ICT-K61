#include<stdio.h>

int main(){
  int student;
  float avg;
  int remain;
  
  printf("Enter the number of student: ");
  scanf("%d", &student);

  avg = ((float)student)/7;
  remain = student % 7;
  
  printf("%.2f, %d\n", avg, (int)avg);

  printf("The number of students in the smallest class: %d\n", (int)avg);
  printf("The number of students int the largest class: %d\n", (student + 6)/7);
  printf("The average students in classes: %.2f\n", avg);
  printf("The number of classes above the average size: %d\n", remain);
  printf("The number of classes of at most average size: %d\n", 7-n%7);
  printf("The number of students in class of larger than average size: %d\n", ());
  
  return 0;
}
