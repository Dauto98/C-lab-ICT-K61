#include<stdio.h>

int main (){
  char name[] = "Nguyen Duc Anh";
  int nameCode[] = {78, 103, 117, 121, 101, 110, 32, 68, 117, 99, 32, 65, 110, 104};


  for(int i = 0; i < 14; i++) {
    printf("%c", nameCode[i]); 
  }

  printf("\n");

  return 0;
}
