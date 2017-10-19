#include <stdio.h>

int main() {
	int option;
	int totalPatient = 0;
	long int totalPayment = 0;
	long int discount = 0, maxDiscount = 0;
	int totalG = 0, totalS = 0, totalC = 0;

	int day;
	long int medicine, surgery;
	char card;
	
	while (1) {
		printf("\n\tMENU\n");
		printf("  1 - Enter data for new patient\n");
		printf("  2 - Print the total report\n");
		printf("  3 - Quit\n");
		printf("Choose an option: ");
		scanf("%d", &option);
		while (option != 1 && option != 2 && option != 3) {
			printf("Please enter correct option: ");
			scanf("%d", &option);
		};

		if (option == 1) {
			printf("New Patient\n");

			printf("How long have you stayed in the hospital: ");
			scanf("%d", &day);

			printf("How much have you paid for your medicine : ");
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
			totalPatient++;
			totalPayment += ((long int)day*150000 + medicine + surgery) * (card == 'G' ? 0.3 : (card == 'S' ? 0.5 : 0.7));
			discount = ((long int)day*150000 + medicine + surgery) * (1 - (card == 'G' ? 0.3 : (card == 'S' ? 0.5 : 0.7)));
			if (maxDiscount < discount) {
				maxDiscount = discount;
			};
			card == 'G' ? totalG++ : (card == 'S' ? totalS++ : totalC++);
		} else if (option == 2) {
			printf("\tTOTAL REPORT\n");

			printf("Total number of patient: %d\n", totalPatient);
			printf("Average payment: %ld\n", (totalPatient > 0 ? totalPayment/totalPatient : 0));
			printf("The number of assurance card type G: %d\n", totalG);
			printf("The number of assurance card type S: %d\n", totalS);
			printf("The number of assurance card type C: %d\n", totalC);
			printf("The most profit patient get from assurance is: %ld\n", maxDiscount);
		} else if (option == 3) {
			printf("Goodbye\n");
			break;
		};
	};

	return 0;
}
