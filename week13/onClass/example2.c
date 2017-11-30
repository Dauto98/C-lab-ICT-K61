#include<stdio.h>

int spaceCounter(char input[]){
  int i = 0;
  int count = 0;
  while(input[i] != '\0'){
    if(input[i] == ' ' || input[i] == '\t' || input == '\n') {
      count++;
    };
    i++;
  };
  return count;
}

int main(){
  char string[20];
  
  printf("Type a string: ");
  scanf("%[^\n]s", string);

  int spaceCount = spaceCounter(string);

  printf("The number of space: %d\n", spaceCount);

  return 0;
}
