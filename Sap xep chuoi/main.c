#include <stdio.h>
#include "sapxep.h"


void main() {
	char arr[4] = { 1,4,2,3 };

	int size = 0;
	size = sizeof(arr) / sizeof(char);

	printf("Truoc khi sap xep:\r\n");
	for (int i = 0; i < size; i++) {
		printf("%d\r\n", arr[i]);
	}

	printf("Sau khi sap xep:\r\n");
	sapxep(arr, size);
	for (int i = 0; i < size; i++) {
		printf("%d\r\n", arr[i]);
	}
}

