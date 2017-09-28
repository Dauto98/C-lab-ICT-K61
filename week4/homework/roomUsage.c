#include <stdio.h>

int main() {
	char class[10], course[20];
	int usedDate[3], start[2], end[2], order = 1;

	printf("Enter the date you used: ");
	scanf("%d%*c%d%*c%d", &usedDate[0], &usedDate[1], &usedDate[2]);

	printf("Enter the class: ");
	scanf("%s", class);

	printf("Enter the course: ");
	scanf("%*c%[^\n]s", course);

	printf("Enter the starting time: ");
	scanf("%d%*c%d", &start[0], &start[1]);

	printf("Enter the ending time: ");
	scanf("%d%*c%d", &end[0], &end[1]);

	printf("\
\tBK Bookseller\n\
  STT     Ngày tháng      Tên lớp     Tên môn học            Bắt đầu      Kết thúc\n\
  ________________________________________________________________________________\n\
  %-8d%d/%d/%-10d%-11s%-23s%d:%-11d%d:%d\n",\
order, usedDate[0], usedDate[1], usedDate[2], class, course, start[0], start[1], end[0], end[1]);

	return 0;
}
