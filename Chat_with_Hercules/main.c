#include <stdio.h>
#include "Socket.h"

WINAPI Recv_Data() {
	char data_recv[100] = { 0 };
	while (1) {
		Recv(data_recv, sizeof(data_recv));
		if (strlen(data_recv) != 0) {
			printf(data_recv);
			printf("\r\n");
			memset(data_recv, 0, sizeof(data_recv));
		}
		Sleep(500);
	}
}


void main() {
	char* ipSer = "127.0.0.1";
	int port = 8888;
	Socket_Client_Init(ipSer, port);

	HANDLE phanluong = CreateThread(NULL, 256, Recv_Data, NULL, NULL, NULL);

	char data_send[100] = { 0 };
	while (1) {
		fgets(data_send, sizeof(data_send), stdin);
		Send(data_send);
		memset(data_send, 0, sizeof(data_send));
	}
}
