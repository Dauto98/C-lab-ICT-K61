#include<stdio.h>

int main(){
  float degree;

  printf("Enter heading in degree: ");
  scanf("%f", &degree);

  if (degree >= 0 && degree < 90) {
    printf("north (heading) east\n");
  } else if (degree < 180) {
    printf("north (180.0 - heading) west\n");
  } else if (degree < 270) {
    printf("south (heading - 180.0) west\n");
  } else if (degree < 360) {
    printf("south (360.0 - heading) east\n");
  };

  return 0;
}
