#include<stdio.h>

int main(){
  int size;
  int sum = 0;
  
  printf("Enter the size of an array: ");
  scanf("%d", &size);

  while(size <= 0) {
    printf("The size of an array must be positive. Please retype: ");
    scanf("%d", &size);
  };

  int array[size];

  for(int i = 0; i < size; i++){
    printf("Enter value for element %d: ", i+1);
    scanf("%d", &array[i]);
    if(i > 2) {
      if(array[i-1] > array[i] && array[i-1] > array[i-2]){
	sum += array[i-1];
      };
    }
  };

  if(array[0] > array[1]){
    sum += array[0];
  };

  if(array[size -1] > array[size - 2]){
    sum += array[size -1];
  };

  int count = 0;
  printf("Values of the array: \n");
  for(int i = 0; i < size; i++){
    printf("%5d", array[i]);
    count++;
    if(count >= 10){
      printf("\n");
      count = 0;
    };
  };

  printf("\nThe sum: %d\n", sum);

  return 0;  
}
