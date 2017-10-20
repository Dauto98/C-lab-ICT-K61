#include<stdio.h>
#include<math.h>

int main(){
  double number, xn, ketqua;
  printf("Enter a number: ");
  scanf("%lf", &number);

  xn = (number + 1)/2;
  do {
    ketqua = xn;
    xn = 0.5 * (xn + number/xn);
    printf("%lf\n", xn);
  } while(fabs(xn - ketqua) > 0.0001);
  printf("\nResult = %lf\n", xn);
}
