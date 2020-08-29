#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	FILE* h1 = fopen("1.jpg","r+b");
	FILE* h2 = fopen("Moon.jpg", "rb");
	
	int i = 0;
	while (1) {
		int a = fgetc(h2);
		if (a != EOF) {
			fputc(a, h1);
			printf("%c----%d\r\n", a, i);
			i++;
		}
		else {
			break;
		}
	}
	printf("Done!");
}
