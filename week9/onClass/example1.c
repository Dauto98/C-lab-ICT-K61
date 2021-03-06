#include<stdio.h>

double kineticEnergy(double m, double v);
double getMass();
double getSpeed();

void main(){
  double m, v;

  m = getMass();
  v = getSpeed();
  printf("Kinetic energy of element is: %f", kineticEnergy(m,v));
}

double kineticEnergy(double m, double v) {
  return m*v*v/2;
}

double getMass() {
  double m;
  printf("Enter mass: ");
  scanf("%lf", &m);
  while(m < 0) {
    printf("Mass must > 0, retype: \n");
    scanf("%lf", &m);
  };

  return m;
}

double getSpeed() {
  double v;
  printf("Enter speed: ");
  scanf("%lf", &v);
  while(v < 0) {
    printf("Speed must > 0, retype: ");
    scanf("%lf", &v);
  };

  return v;
}
