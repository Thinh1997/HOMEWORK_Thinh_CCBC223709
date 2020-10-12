#include "bai14.h"

void bai14() {
	int data[29] = { 0 };
	int a = 0;
	printf("Hay nhap so luong phan tu: ");
	scanf_s("%d", &a);

	if (a > 29) {
		printf("So luong phan tu qua 30.");
	}
	for (int i = 0; i < a; i++) {
		printf("Nhap phan tu thu %d: ", i+1);
		scanf_s("%d", data + i);
	}
	//In day so ra
	printf("Day so da nhap la: ");
	inra(data, a);
	printf("\r\n");

	//In ra cac so chan
	sochan(data, a);

	//Sap xep day so giam dan va in ra man hinh 
	printf("Sau khi sap xep giam dan: ");
	sapxep_giamdan(data, a);

	//Nhap so X vao va sap xep theo thu tu giam dan, sau do in ra man hinh
	printf("\r\nNhap vao so X muon them: ");
	scanf_s("%d", data+a);
	sapxep_giamdan(data, a + 1);
}

void inra(int* a, int b) {
	for (int i = 0; i < b; i++) {
		printf("%d ", *(a+i));
	}
}

void sochan(int* a, int b) {
	for (int i = 0; i < b; i++) {
		if (*(a + i) % 2 == 0) {
			printf("So %d nam tai vi tri thu %d\r\n", *(a+i), i+1);
		}
	}
}

void sapxep_giamdan(int* a, int b) {
	for (int i = 0; i < b; i++) {
		for (int j = 0; j < b; j++) {
			if (*(a + i) > *(a + j)) {
				int c = *(a + i);
				*(a + i) = *(a + j);
				*(a + j) = c;
			}
		}
	}
	inra(a, b);
}

