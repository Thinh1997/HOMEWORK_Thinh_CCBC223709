#include "bai12.h"

void bai12() {
	int arr[100] = { 0 };
	unsigned int a = 0;
	int i = 0;

	printf("Nhap so phan tu cua mang: ");
	scanf_s("%d", &a);

	for (i; i <= a - 1; i++) {
		printf("Nhap phan tu thu %d: ", i + 1);
		scanf_s("%d", arr + i);
	}

	printf("----------------------------------------------------\r\n");

	i = 0;
	for (i; i <= a - 1; i++) {
		printf("Phan tu thu %d nam o vi tri thu %d la: %d\r\n", i+1, i, arr[i]);
	}
}
