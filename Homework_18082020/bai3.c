#include "bai3.h"

void bai3() {
	int a = 0;
	printf("Nhap so nguyen bat ky:\r\n");
	scanf_s("%d", &a);
	check(a);
}

void check(int a) {
	(a % 2 == 0) ? printf("So Chan!") : printf("So Le!");
}