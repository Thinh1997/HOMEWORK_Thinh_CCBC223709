#include "ttcn.h"

void info::nhapinfo(char* ten, int tuoi, Gioitinh_t gioitinh, char* address, char* CMND) {
	memcpy(this->ten, ten, strlen(ten));
	memcpy(this->CMND, CMND, strlen(CMND));
	memcpy(this->address, address, strlen(address));
	this->gioitinh = gioitinh;
	this->Tuoi = tuoi;
}

info::info() {
	memcpy(this->ten, "Nguyen Van A", strlen("Nguyen Van A"));
	memcpy(this->address, "Phuong 5", strlen("Phuong 5"));
	memcpy(this->CMND, "123456789", strlen("123456789"));
	this->Tuoi = 25;
	this->gioitinh = nam;
}

info::info(char* ten, int tuoi) {
	memcpy(this->ten, ten, strlen(ten));
	memcpy(this->address, "Phuong 5", strlen("Phuong 5"));
	memcpy(this->CMND, "123456789", strlen("123456789"));
	this->Tuoi = tuoi;
	this->gioitinh = nam;
}

info::~info() {
}
