#include<stdio.h>
#define size 3
int a[size][size], b[size][size], c[size][size];


void inputMatrix();
void displayMatrix();
void sum();
void multiply();
void menu();

int main(){
  menu();
  return 0;
}

void inputMatrix(){
  int temp;
  printf("Enter values for matrix A: \n");
  for (int i = 0; i < size; i++){
    for(int j = 0; j < size; j++) {
      printf("Enter values for col %d, row %d: ", i, j);
      scanf("%d", &temp);
      a[i][j] = temp;
    };
  };

  printf("Enter values for matrix B: \n");
  for (int i = 0; i < size; i++){
    for(int j = 0; j < size; j++) {
      printf("Enter values for col %d, row %d: ", i, j);
      scanf("%d", &temp);
      b[i][j] = temp;
    };
  };
}

void displayMatrix(){
  printf("Matrix A: \n");
  for (int i = 0; i < size; i++){
    for(int j = 0; j < size; j++) {
      printf("%3d", a[j][i]);
    };
    printf("\n");
  };

  printf("Matrix B: \n");
  for (int i = 0; i < size; i++){
    for(int j = 0; j < size; j++) {
      printf("%3d", b[j][i]);
    };
    printf("\n");
  };
}

void sum(){
  for (int i = 0; i < size; i++){
    for(int j = 0; j < size; j++) {
      c[i][j] = a[i][j] + b[i][j];
    };
  };

  printf("Matrix C: \n");
  for (int i = 0; i < size; i++){
    for(int j = 0; j < size; j++) {
      printf("%3d", c[j][i]);
    };
    printf("\n");
  };
}

void multiply(){
  for (int i = 0; i < size; i++){
    for(int j = 0; j < size; j++) {
      
    };
  };
}

void menu(){
  int option;
  while(1){
      printf("\tMENU\n");
      printf("1 - Input matrices A, B\n");
      printf("2 - Display matrices A, B\n");
      printf("3 - Sum of matrices A, B\n");
      printf("4 - Product of matrices A, B\n");
      printf("5 - Quit\n");
      
      scanf("%d", &option);
      
      while(option < 1 || option > 5){
	printf("Please type the correct option: ");
	scanf("%d", &option);
      };

      if (option == 1) {
	inputMatrix();
      } else if (option == 2) {
	displayMatrix();
      } else if (option == 3) {
	sum();
      } else if (option == 4) {
	multiply();
      } else if (option == 5) {
	printf("Goodbye\n");
	break;
      };
  }; 
}
