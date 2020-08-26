#include "bai10.h"

void bai10() {
	float x = 0;
	float y = 0;
	printf("Hay nhap so x:\r\n");
	scanf_s("%f", &x);
	printf("Hay nhap so y:\r\n");
	scanf_s("%f", &y);

	float S = 0;
	if (x > y) {
		if (x > 1) {
			S = 2 * x * 2 * y + 1 - x + 1;
		}
		else {
			S = 2 * x * 2 * y + 1 - x - 1;
		}
	}
	else {
		S = 5 * x - 3 * y * 3 * x;
	}
	printf("Gia tri cua S la: %.3f", S);
}
