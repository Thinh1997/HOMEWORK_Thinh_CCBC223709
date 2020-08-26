#include "bai9.h"

void bai9() {
	int n = 0;
	printf("Hay nhap so n:\r\n");
	scanf_s("%d",&n);

	int sum = 0;
	for (n; n >= 0; n--) {
		if (n == 0) {
			sum += 1;
		}
		else {
			sum += (2 * n) + 1;
		}
	}
	printf("Tong gia tri la: %d\r\n",sum);
}
