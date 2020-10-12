#include "bai15.h"

void bai15() {
	float data[50] = { 0 };
	int a = 0;
	printf("Nhap so luong phan tu trong mang: ");
	scanf_s("%d", &a);
	if (a >= 50) {
		printf("So luong qua lon.");
	}

	for (int i = 0; i < a; i++) {
		printf("Hay nhap so thu %d: ", i + 1);
		scanf_s("%f", data + i);
	}

	inra_sort(data, a);
}

void inra_sort(int* a,int b) {
	for (int i = 0; i < b; i++) {
		if (*(a + i) % 2 != 0) {
			*(a + i) = 0;
		}
		else {
			printf("%.2f ", *(a + i));
		}
	}
}

