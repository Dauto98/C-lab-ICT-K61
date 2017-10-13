#include<stdio.h>
#include<math.h>

int main(){
  int j;
  for(int i = 3; i < 100; i++){
    int a = (int)trunc(sqrt(i));
    //printf("%-3d%d\n", i, a);
    for(j = 2; j <= a; j++){
      if(i % j == 0){
	break;
      };
    };
    if(j <= a) {
      continue;
    } else {
      printf("%-3d\n", i);
    };
  };
}
