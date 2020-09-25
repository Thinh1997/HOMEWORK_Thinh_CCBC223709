#include "hs.h"

int main() {
	char ten[] = "Vo Nguyen Tuong Vinh";
	char diachi[] = "196/6 nguyen thuong hien";
	char cmnd[] = "123456789";
	int tuoi = 25;

	int toan = 7;
	int ly = 7;
	int anh = 7;

	info_hs A;
	A.nhapinfo(ten, tuoi, nam, diachi, cmnd);
	A.nhapdiem(toan, ly, anh);
	A.tinhdiemtb();

	printf("Ho ten hoc sinh: ");
	printf(A.ten);
	printf("\r\n");

	printf("Tuoi: ");
	printf("%d\r\n", A.Tuoi);

	printf("--------------------\r\n");
	printf("Diem trung binh cua hoc sinh: ");
	printf("%.2f\r\n", A.tb);
	if (A.loai == Gioi) {
		printf("Hoc sinh xep loai Gioi.");
	}
	else if (A.loai == Kha) {
		printf("Hoc sinh xep loai Kha.");
	}
	else if (A.loai == TrungBinh) {
		printf("Hoc sinh xep loai Trung Binh.");
	}
	else {
		printf("Hoc sinh xep loai Kem.");
	}

	return 0;
}
