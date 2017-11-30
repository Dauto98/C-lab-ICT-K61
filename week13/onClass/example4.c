#include<stdio.h>

void cutLastName(char name[]) {
  int i;
  for(i = 0; name[i] != ' '; i++) {}
  name[i] = '\0';
}

int main(){
  char name[30];

  printf("Enter you name: ");
  scanf("%[^\n]s", name);

  cutLastName(name);

  printf("Your first name: %s\n", name);

  return 0;
}
