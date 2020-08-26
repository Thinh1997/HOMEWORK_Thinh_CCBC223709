#include "bai1.h"

int bai1(int n) {
	int i = 0;
	int sum = 0;
	for (i; i <= n; i++) {
		if (i % 2 != 0) {
			sum += i;
		}
	}
	sum = sum * sum;
	printf("Tong binh phuong cac so le tu 1 den %d là: %d", n, sum);
}