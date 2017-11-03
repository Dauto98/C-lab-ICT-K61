#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
  int option;
  float number, accuracy;

  while (1) {
    printf("\n\tMenu\n");
    printf("1 - Enter new positive number and the accuracy for calculation\n");
    printf("2 - sin(number)\n");
    printf("3 - sqrt(number)\n");
    printf("4 - e^number\n");
    printf("5 - quit\n");
    printf("Enter an option: ");
    scanf("%d", &option);

    while(option != 1 && option != 2 && option != 3 && option != 4 && option != 5) {
      printf("Please choose the correct option: ");
      scanf("%d", &option);
    };

    if (option == 1) {
      printf("Enter new positive number: ");
      scanf("%f", &number);
      while (number <= 0) {
        printf("The number must be positive, type another one: ");
        scanf("%f", &number);
      };
      printf("Enter the accuracy (E.g: 0.00001): ");
      scanf("%f", &accuracy);
    } else if (option == 2) {
      printf("Calculate sin(x)\n");

      int n, x1;
      float term, denominator, sinx, sinval;

      x1 = number;
      number = number * (3.142 / 180.0);
      sinval = sin(number);
      term = number;
      sinx = term;
      n = 1;
      do
      {
        denominator = 2 * n * (2 * n + 1);
        term = -term * number * number / denominator;
        sinx = sinx + term;
        n = n + 1;
      } while (accuracy <= fabs(sinval - sinx));
      printf("Sum of the sine series = %f \n", sinx);
      printf("Using Library function sin(%d) = %f\n", x1, sin(number));
    } else if (option == 3) {
      printf("Calculate sqrt(x)\n");

      if (number <= 0)
      return 0;
      int exp = 0;
      number = frexp(number, &exp);
      if (exp & 1) {
        exp--;
        number *= 2;
      }
      double y = (1+number)/2;
      double z = 0;
      while (y != z) {
        z = y;
        y = (y + number/y) / 2;
      }
      printf("square root: %.2f\n" , ldexp(y, exp/2));
    } else if (option == 4) {
      printf("Calculate e^x\n");

      float xrad,xn = 1,denominator,term;
      int n = 1;

      do {
        term=xn;
        denominator=1;
        for (int i=1;i<=n;i++) {
          denominator*=i;
        };
        xn = xn + pow(number,n)/denominator;
        n++;
      } while (fabs(term-xn) > accuracy);
      printf("e^x= %.5lf\n\n",xn);
    } else if (option == 5) {
      printf("Goodbye\n");
      break;
    };
  };

  return 0;
}
