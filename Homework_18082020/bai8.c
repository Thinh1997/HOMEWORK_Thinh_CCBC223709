#include "bai8.h"

void bai8() {
	int n = 0;
	float x = 0;
	printf("Hay nhap so n:\r\n");
	scanf_s("%d", &n);
	printf("Hay nhap so x:\r\n");
	scanf_s("%f", &x);

	float sum = 0;
	for (n; n >= 0; n--) {
		if (n == 0) {
			sum += 1;
		}
		else {
			sum += n * n * x;
		}
	}
	printf("Tong gia tri bang: %.3f", sum);
}


