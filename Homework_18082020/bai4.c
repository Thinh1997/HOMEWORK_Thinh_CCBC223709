#include "bai4.h"

void bai4() {
	int a = 0;
	int b = 0;
	printf("Nhap so nguyen thu 1:\r\n");
	scanf_s("%d", &a);
	printf("Nhap so nguyen thu 2:\r\n");
	scanf_s("%d", &b);
	printf("Boi chung nho nhat la: %d\r\n", bcnn(a,b));
	printf("Uoc chung lon nhat la: %d\r\n", ucln(a, b));
}

int ucln(int a, int b) {
	int uc = 0;
	uc = (a > b) ? b : a;
	for (uc; uc > 0; uc--) {
		if ((a % uc == 0) && (b % uc == 0)) {
			break;
		}
	}
	return uc;
} 

int bcnn(int a, int b) {
	int bc = 0;
	int i = 1;
	int bc_t = 0;
	bc = (a > b) ? a : b;
	while (1) {
		bc_t = bc;
		bc_t = bc_t * i;
		if ((bc_t % a == 0) && (bc_t % b == 0)) {
			break;
		}
		i++;
	}
	return bc_t;
}
