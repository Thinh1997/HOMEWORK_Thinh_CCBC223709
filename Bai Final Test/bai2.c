#include "bai2.h"

void xulyData() {
	smartHome_t A;
	char data_recv[128] = "HTTP1.1 200 OK\r\n{\r\n\"light\":\"off\",\r\n\"fan\":\"on\",\r\n\"motor\":\"off\"\r\n}";
	printf(data_recv);
	printf("\r\n");

	char target1[] = "light";
	char target2[] = "fan";
	char target3[] = "motor";

	//Kiem tra on-off sau do gan bien len light
	int B = check_stt(data_recv, target1);
	if (B == 1) {
		A.light = 1;
		printf("Trang thai cua den la: ON\r\n");
	}
	else {
		A.light = 0;
		printf("Trang thai cua den la: OFF\r\n");
	}

	//Kiem tra on-off sau do gan bien len fan
	int C = check_stt(data_recv, target2);
	if (C == 1) {
		A.fan = 1;
		printf("Trang thai cua quat la: ON\r\n");
	}
	else {
		A.fan = 0;
		printf("Trang thai cua quat la: OFF\r\n");
	}

	//Kiem tra on-off sau do gan bien len motor
	int D = check_stt(data_recv, target3);
	if (D == 1) {
		A.motor = 1;
		printf("Trang thai cua motor la: ON\r\n");
	}
	else {
		A.motor = 0;
		printf("Trang thai cua motor la: OFF\r\n");
	}
}

int check_stt(char* data, char* target) {
	int kq = 0;
	char stt[] = "on";
	int a = 0;
	int i = 0;
	for (i; i < (strlen(data) - strlen(target)); i++) {
		if (data[i] == target[0]) {
			int j = 0;
			for (j; j < strlen(target); j++) {
				if (data[i + j] != target[j]) {
					break;
				}
			}
			if (j == strlen(target)) {
				a = 1;
				break;
				
			}
			else {
				a = 0;
			}
		}
	}

	if (a == 1) {
		for (i; i < (strlen(data) - strlen(stt)); i++) {
			if (data[i] == stt[0]) {
				int j = 0;
				for (j; j < strlen(stt); j++) {
					if (data[i + j] != stt[j]) {
						break;
					}
				}
				if (j == strlen(stt)) {
					kq = 1;
					break;
				}
				else {
					kq = 0;
				}
			}
			else if (data[i] == ',') {
				kq = 0;
				break;
			}
		}
	}
	else {
		printf("Khong tim thay target.");
	}

	return kq;
}
