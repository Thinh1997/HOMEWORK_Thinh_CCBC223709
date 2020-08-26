#include "bai7.h"

void bai7() {
	int a = 0;
	bool b = 0;
	printf("Hay nhap 1 so tu ban phim:\r\n");
	scanf_s("%d", &a);

	for (int i = a - 1; i >= 2; i--) {
		if (a % i == 0) {
			b = 1;
			break;
		}
	}
	
	if (b == 0) {
		printf("So %d la so nguyen to!", a);
	}
	else {
		printf("So %d khong phai so nguyen to!",a);
	}
}
