#include "PhanSo.h"
#include "HocSinh.h"

void main() {
	PhanSo A, B, C;
	A.tu = 1;
	A.mau = 2;
	B.tu = 2;
	B.mau = 4;
	C = A.congps(B);
	printf("A + B = %d/%d\r\n", C.tu, C.mau);

	C = A.nhanps(B);
	printf("A * B = %d/%d\r\n", C.tu, C.mau);

	C = A.chiaps(B);
	printf("A / B = %d/%d\r\n", C.tu, C.mau);

	C = A.trups(B);
	printf("A - B = %d/%d\r\n", C.tu, C.mau);

	char hotenHS[30] = "Nguyen Van A";
	char tongiao[10] = "Phat giao";
	char mahssv[10] = "I15CT01";
	char lop[6] = "10A12";
	bool sex = 1;
	int tuoi = 16;
	int height = 167;
	int weight = 65;

	info_HS a;
	a.nhapinfo(hotenHS, tongiao, mahssv, lop, sex, tuoi, height, weight);
	printf("%s\r\n", a.hoten);
}
