#include <stdio.h>

int dodai(char* a);
int search(char* a, char* b);

void main() {
	char string1[] = "{\r\n\
\"ABC\":\"ON\"\r\n\
\"Fun\":\"OFF\"\r\n\
\"Motor\":\"OFF\"\r\n\
\"Fan\":\"ON\"\r\n\
\"TV\":\"OFF\"\r\n}";
	
	char mfind[] = "Fan";
	search(string1,mfind);

}


int dodai(char* a) {
	int i = 0;
	while (a[i] != 0x00) {
		i++;
	}
	return i;
}


int search(char* a, char* b) {
	int i = 0;
	for ( i = 0; i < dodai(a) - 2; i++) {
		int j = 0;
		for (j = 0; j <= dodai(b); j++) {
			if (a[i+j] != b[j]) {
				break;
			}
		}
		if (j >= dodai(b)) {
			break;
		}
	}

	int e = 0;
	char stt[] = "";
	e = i + dodai(b) + 2;
	while (a[e] != '"') {
		e++;
	}
	if (a[e] == 'F') {
		printf("Trang thai cua thiet bi la: OFF\r\n");
	}
	else {
		printf("Trang thai cua thiet bi la: ON\r\n");
	}

	printf("Dia chi cua chu F la: %x\r\n", &a+i);
}
