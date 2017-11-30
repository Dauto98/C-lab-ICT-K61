#include<stdio.h>
#include<ctype.h>

int testFormat(char string[]) {
  for(int i = 0; i < 3; i++) {
    if(!isalpha(string[i])){
      return 0;
    };
  };

  for(int i = 3; i < 7; i++) {
    if(!isdigit(string[i])){
      return 0;
    };
  };

  if(string[7] != '\0') {
    return 0;
  };

  return 1;
}

int main(){
  char string[20];

  printf("Enter a string: ");
  scanf("%s", string);

  int result = testFormat(string);

  if(result) {
    printf("The string format is correct\n");
  } else {
    printf("The string format is incorrect\n");
  };
  
  return 0;
}
