#include<stdio.h>

int main(){
  int ma;
  printf("\nGo vao ma tinh do");
  scanf("%d",&ma);
  if (ma == 1) {
    printf("\nTrinh do trung cap");
  } else if (ma == 2) {
    printf("\nTrinh do cao dang");
  } else if (ma == 3) {
    printf("\nTrinh do dai hoc");
  } else {
    printf("\nNhap sai ma");
  };
  return 0;
};
