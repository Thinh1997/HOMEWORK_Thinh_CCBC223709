#include "bai5.h"

void bai5() {
	int a = 0;
	printf("Nhap so can kiem tra:\r\n");
	scanf_s("%d", &a);
	ch(a);
}

void ch(int a) {
	int sum = 0;
	int i = 0;
	for (i = a-1; 1 <= i; i--) {
		if (a % i == 0) {
			sum += i;
		}
	}
	if (sum == a) {
		printf("So %d la so hoan hao!", a);
	}
	else {
		printf("So %d khong phai la so hoan hao!",a);
	}
}
