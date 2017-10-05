#include<stdio.h>

int main(){
  int schedule[5][4], temp, time;
  
  printf("Enter your work schedule in format: 2h23-3h22\n");

  printf("Enter your work on Monday: ");
  scanf("%d%*c%d%*c%d%*c%d", &schedule[0][0], &schedule[0][1], &schedule[0][2], &schedule[0][3]);
  temp = (schedule[0][2] - schedule[0][0])*60 + (schedule[0][3] - schedule[0][1]);
  time < temp ? time = temp : 1 ;

  printf("Enter your work on Tuesday: ");
  scanf("%d%*c%d%*c%d%*c%d", &schedule[1][0], &schedule[1][1], &schedule[1][2], &schedule[1][3]);
  temp = (schedule[1][2] - schedule[1][0])*60 + (schedule[1][3] - schedule[1][1]);
  time < temp ? time = temp : 1 ;
  
  printf("Enter your work on Wednesday: ");
  scanf("%d%*c%d%*c%d%*c%d", &schedule[2][0], &schedule[2][1], &schedule[2][2], &schedule[2][3]);
  temp = (schedule[2][2] - schedule[2][0])*60 + (schedule[2][3] - schedule[2][1]);
  time < temp ? time = temp : 1 ;
  
  printf("Enter your work on Thursday: ");
  scanf("%d%*c%d%*c%d%*c%d", &schedule[3][0], &schedule[3][1], &schedule[3][2], &schedule[3][3]);
  temp = (schedule[3][2] - schedule[3][0])*60 + (schedule[3][3] - schedule[3][1]);
  time < temp ? time = temp : 1 ;
  
  printf("Enter your work on Friday: ");
  scanf("%d%*c%d%*c%d%*c%d", &schedule[4][0], &schedule[4][1], &schedule[4][2], &schedule[4][3]);
  temp = (schedule[4][2] - schedule[4][0])*60 + (schedule[4][3] - schedule[4][1]);
  time < temp ? time = temp : 1 ;
  
  printf("\n\
     Your work schedule\n\
_____________________________________________\n\
Monday                          %dh%d - %dh%d\n\
Tuesday                         %dh%d - %dh%d\n\
Wednesday                       %dh%d - %dh%d\n\
Thursday                        %dh%d - %dh%d\n\
Friday                          %dh%d - %dh%d\n",\
schedule[0][0], schedule[0][1], schedule[0][2], schedule[0][3], schedule[1][0], schedule[1][1], schedule[1][2], schedule[1][3],\
schedule[2][0], schedule[2][1], schedule[2][2], schedule[2][3], schedule[3][0], schedule[3][1], schedule[3][2], schedule[3][3],\
schedule[4][0], schedule[4][1], schedule[4][2], schedule[4][3]);

  time >= 480 ? printf("Hay can bang giua cong viec va nghi ngoi\n") : 1 ;
  return 0;
}
