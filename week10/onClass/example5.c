#include<stdio.h>

int isEqual(int array1[], int array2[], int size){
  for(int i = 0; i < size; i++){
    if(array1[i] != array2[i]){
      return 0;
    };
  };
  return 1;
}

int main(){
  int size;

  printf("Enter the size of 2 array: ");
  scanf("%d", &size);

  while(size <= 0) {
    printf("The size of an array must be positive. Please retype: ");
    scanf("%d", &size);
  };

  int array1[size], array2[size];

  printf("Enter values for array 1\n");
  for(int i = 0; i < size; i++){
    printf("Enter values for element %d: ", i+1);
    scanf("%d", &array1[i]);
  };

  printf("Enter values for array 2\n");
  for(int i = 0; i < size; i++){
    printf("Enter values for element %d: ", i+1);
    scanf("%d", &array2[i]);
  };

  if(isEqual(array1, array2, size)){
    printf("2 arrays are equal\n");
  } else {
    printf("2 array are not equal\n");
  };

  return 0;
}
