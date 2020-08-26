#include "bai2.h"

void bai2() {
	int arr[3] = {0};
	for (int i = 0; i <= 2; i++) {
		printf("Nhap so %d\r\n", i+1);
		scanf_s("%f", &arr[i]);
	}
	printf("So lon nhat: %.2f\r\n", max(arr));
}

float max(float *a) {
	for (int i = 0; i <= 1; i++) {
		if (a[i] > a[i + 1]) {
			float temp = a[i];
			a[i] = a[i + 1];
			a[i + 1] = temp;
		}
	}
	return a[2];
}
