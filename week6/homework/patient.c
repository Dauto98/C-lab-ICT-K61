#include <stdio.h>

int main() {
	int day;
	long int medicine, surgery;
	char card;

	printf("How long have you stayed in the hospital: ");
	scanf("%d", &day);

	printf("How much have you paid for your medicineL :");
	scanf("%ld", &medicine);

	printf("How much have you paid for your surgery: (Enter 0 if no surgery)");
	scanf("%ld", &surgery);

	printf("What is your health insurance card's type: (G - gold; S - silver; C - citizen)");
	scanf("%c", &card);

	while (card != 'G' && card != 'S' && card != 'C') {
		printf("Please type the correct letter: ");
		scanf("%c", &card);
	};

	printf("\tHÓA ĐƠN THANH TOÁN VIỆN PHÍ\n");
	printf("Phí nội trú                     %ld\n", (long int)day*150000);
	printf("Tiền thuốc                      %ld\n", medicine);
	surgery > 0 ? printf("Tiền phẫu thuật                 %ld\n", surgery) : 1;
	printf("TỔNG CỘNG                       %ld\n", (long int)day*150000 + medicine + surgery);
	printf("Loại thẻ bảo hiểm y tế: %s\n", card == 'G' ? "Gold" : (card == 'S' ? "Silver" : "Citizen"));
	printf("SỐ TIỀN PHAỈ TRẢ                %.2lf\n", ((long int)day*150000 + medicine + surgery) * (card == 'G' ? 0.3 : (card == 'S' ? 0.5 : 0.7)));

	return 0;
}
