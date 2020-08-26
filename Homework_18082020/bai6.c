#include "bai6.h"

void bai6() {
	int a = 0;
	printf("Hay nhap so can kiem tra:\r\n");
	scanf_s("%d", &a);
	float a2 = 0;
	a2 = sqrt(a);
	for (int i = a2; i >= 1; i--) {
		a2--;
	}
	if (a2 != 0) {
		printf("So %d la so khong chinh phuong!", a);
	}
	else {
		printf("So %d la so chinh phuong!", a);
	}
}
