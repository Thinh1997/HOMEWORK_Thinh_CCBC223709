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
}
