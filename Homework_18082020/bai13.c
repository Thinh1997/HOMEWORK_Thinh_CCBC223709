#include "bai13.h"

void bai13() {
	int data[10] = { 0 };
	int a = 0;
	printf("Hay nhap so luong cac phan tu co trong mang:\r\n");
	scanf_s("%d", &a);
	if (a >= 10) {
		printf("So luong phan tu vuot qua 10.\r\n");
	}

	for (int i = 0; i < a; i++) {
		printf("Nhap phan tu thu %d: ", i+1);
		scanf_s("%d", data + i);
	}

	inra_smallest(data, a);
	inra_biggest(data, a);
	medium(data, a);
}

void inra_smallest(int *a, int b) {
	int c = *a;
	int d = 0;
	for (int i = 1; i < b; i++) {
		if ( *(a + i) < c ) {
			c = *(a + i);
			d = i;
		}
	}
	printf("So nho nhat trong day so la %d, vi tri so do trong day la %d\r\n", c, d);
}

void inra_biggest(int* a, int b) {
	int c = *a;
	int d = 0;
	for (int i = 1; i < b; i++) {
		if (*(a + i) > c) {
			c = *(a + i);
			d = i;
		}
	}
	printf("So lon nhat trong day so la %d, vi tri so do trong day la %d\r\n", c, d);
}

void medium(int* a, int b) {
	int medium = 0;
	int sum = 0;
	for (int i = 0; i < b; i++) {
		sum += *(a + i);
	}
	medium = sum / (b - 1);
	printf("Tong cac so trong day la: %d\r\n", sum);
	printf("Trung binh cong cac so trong day la: %d\r\n", medium);
}

