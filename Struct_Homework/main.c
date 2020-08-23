#include "phanso_operator.h"

void main() {
	Phanso_t A, B, C, D, E, F;
	A.tu = 12;
	A.mau = 24;
	B.tu = 5;
	B.mau = 15;

	C = congps(A, B);
	D = trups(A, B);
	E = nhanps(A, B);
	F = chiaps(A, B);

	printf("A: %d/%d\r\n", A.tu, A.mau);
	printf("B: %d/%d\r\n", B.tu, B.mau);
	printf("Cong A+B: %d/%d\r\n", C.tu, C.mau);
	printf("Tru A+B: %d/%d\r\n", D.tu, D.mau);
	printf("Nhan A+B: %d/%d\r\n", E.tu, E.mau);
	printf("Chia A+B: %d/%d\r\n", F.tu, F.mau);
	rutgon(&A);
	printf("Rut gon A: %d/%d\r\n", A.tu, A.mau);

	HSSV hs1;
	strcpy_s(hs1.hoten, 20, "Nguyen Van A");
	strcpy_s(hs1.mssv, 8, "i15ct01");
	strcpy_s(hs1.diachi, 50, "49 Phan Dang Luu, P.5, Q.Phu Nhuan, Tp.HCM");
	strcpy_s(hs1.phone, 11, "0765800330");
	hs1.sex = 1;
	hs1.tuoi = 20;
}

 