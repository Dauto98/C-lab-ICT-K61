#include<stdio.h>

int main(){
  const float PI = 3.14;
  float radius;

  printf("Enter the radius: ");
  scanf("%f", &radius);

  printf("The area of the circle: %.2f\n", radius*radius*PI);
  printf("The circumference of the circle: %.2f\n", 2*PI*radius);

  printf("The area of the sphere: %.2f\n", 4*PI*radius*radius);
  printf("The volume of the sphere: %.2f\n", 4*PI*radius*radius*radius/3);

  return 0;
}
