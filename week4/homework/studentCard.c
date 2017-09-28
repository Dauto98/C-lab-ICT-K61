#include <stdio.h>

int main() {
  int studentCode, birthDate[3], course, dueDate[3], startDate[3];
  char name[20], gender[3], address[30], class[10];

  printf("Enter your student code: ");
  scanf("%d", &studentCode);

  printf("Enter your name: ");
  scanf("%*c%[^\n]s", name);

  printf("Enter your birth date: ");
  scanf("%d%*c%d%*c%d", &birthDate[0], &birthDate[1], &birthDate[2]);

  printf("Enter your gender: ");
  scanf("%s", gender);

  printf("Enter your address: ");
  scanf("%*c%[^\n]s", address);

  printf("Enter your class: ");
  scanf("%*c%[^\n]s", class);

  printf("Enter your course: ");
  scanf("%d", &course);

  printf("Enter your expiration date: ");
  scanf("%d%*c%d%*c%d", &dueDate[0], &dueDate[1], &dueDate[2]);

  printf("Enter your start date: ");
  scanf("%d%*c%d%*c%d", &startDate[0], &startDate[1], &startDate[2]);

  printf("\
************************************************************\n\
*              Trường đại học Bách khoa Hà Nội             *\n\
*                      Thẻ sinh viên                       *\n\
************************************************************\n\
*  **********  Mã số sinh viên: %-27d*\n\
*  *        *  Họ tên: %-41s*\n\
*  *        *  Ngày sinh: %d/%d/%-12d%-16s*\n\
*  *        *  Hộ khẩu: %-42s*\n\
*  *        *  Lớp: %-39s*\n\
*  **********  Khóa: K%-11dCó giá trị đến: %d/%d/%-5d*\n\
*                              **************************  *\n\
*  NPH: %d%d%-19d**************************  *\n\
************************************************************\n",\
studentCode, name, birthDate[0], birthDate[1], birthDate[2], gender, address, class, course, dueDate[0], dueDate[1], dueDate[2], startDate[0], startDate[1], startDate[2]);

  return 0;
}
