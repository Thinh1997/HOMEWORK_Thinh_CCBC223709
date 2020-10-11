#include "bai1.h"
#include "bai2.h"
#include "bai4.h"

void main() {
	int a = 30;
	SetBit(&a, 5, 3, 1);

	xulyData();

	HANDLE thread = CreateThread(NULL, 256, task1, NULL, NULL, NULL);
	while (1) {
		printf("Xin chao!!");
		Sleep(1000);
	}
}
