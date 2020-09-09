#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include "Socket.h"

int dodai(char* arr);
int sizeimg(char* size);

void main() {
	char* serip = "116.193.72.106";
	int port = 80;
	char target[] = "Content-Length: ";
	char data[] = "GET /2.jpg HTTP/1.1\r\nHost: mainhan.tk\r\n\r\n";
	Socket_Client_Init(serip, port);
	Send(data);

	char recv_data[300] = { 0 };
	int i = 0;
	while (1) {
		if (dodai(recv_data) <= 2) {
			Recv(recv_data + i, 1);
			i++;
		}
		else {
			if ((recv_data[dodai(recv_data) - 1] == '\n') &&
				(recv_data[dodai(recv_data) - 2] == '\r') && 
				(recv_data[dodai(recv_data) - 3] == '\n') && 
				(recv_data[dodai(recv_data) - 4] == '\r')) {
				break;
			}
			else {
				Recv(recv_data + i, 1);
				i++;
			}
		}
	}
	printf(recv_data);

	char* p = strstr(recv_data, target) + dodai(target);
	int size = sizeimg(p);

	FILE* hinh = fopen("Test.jpg", "wb+");
	char hinh_data[1] = { 0 };
	i = 0;
	while (i <= size) {
		Recv(hinh_data, 1);
		fputc(hinh_data[0], hinh);
		i++;
	}
	fclose(hinh);
	printf("DONE!");
}

int dodai(char* arr) {
	int i = 0;
	int sum = 0;
	while (1) {
		if (arr[i] != 0x00) {
			sum++;
		}
		else {
			break;
		}
		i++;
	}
	return sum;
}

int sizeimg(char* size) {
	char size_img[9] = { 0 };
	int sum = 0;
	int i = 0;
	while (1) {
		if ((size[i] == '\r') | (size[i] == '\n')) {
			break;
		}
		else {
			size_img[i] = size[i];
		}
		i++;
	}
	for (i = 0; i < dodai(size_img); i++) {
		sum += (size_img[i] - '0') * pow(10, dodai(size_img)-i-1);
	}
	return sum;
}