#include<stdio.h>
#include<limits.h>

int main(){
  int j;
  long int k;
  float x;
  double z;

  printf("Enter an integer between %i and %i: ", INT_MIN, INT_MAX);
  scanf("%i", &j);
  printf("You enter %d\n\n", j);

  printf("Enter a long integer between %li and %li: ", LONG_MIN, LONG_MAX);
  scanf("%li", &k);
  printf("You enter %ld\n\n", k);

//  printf("Enter a float between %f and %f: ", FLOAT_MIN, FLOAT_MAX);
//  scanf("%f", &x);
//  printf("You enter %f\n\n", x);

//  printf("Enter a double between %lf and %: ", DOUBLE_MIN, DOUBLE_MAX);
//  scanf("%lf", &z);
//  printf("You enter %lf\n\n", z);

  return 0;
}
