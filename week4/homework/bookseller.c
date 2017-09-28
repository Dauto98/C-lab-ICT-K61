#include <stdio.h>

int main() {
	char title[30];
	int quantity, price, total, pay, vat;
	double isbn;

	printf("Enter title of the book: ");
	scanf("%[^\n]s", title);

	printf("How many books you buy: ");
	scanf("%d", &quantity);

	printf("Enter ISBN of the book: ");
	scanf("%lf", &isbn);

	printf("Enter the price of the book: ");
	scanf("%d", &price);

	total = price*quantity;
	vat = total*0.04;
	pay = total + vat;

	printf("\
\tBK Bookseller\n\
  Qty     ISBN                 Title                        Price            Total\n\
  ________________________________________________________________________________\n\
  %-8d%-21.0lf%-29s%-17d%-d\n\
\n\
  VAT: %d\n\
  You pay: %d\n",\
quantity, isbn, title, price, total, vat, pay);

	return 0;
}
