#include"phanso_operator.h"

Phanso_t congps(Phanso_t A, Phanso_t B) {
	Phanso_t kq;
	kq.tu = (A.tu * B.mau) + (A.mau * B.tu);
	kq.mau = B.mau * A.mau;
	return kq;
}

void rutgon(Phanso_t* A) {
	int C = 0;
	C = (A->tu > A->mau) ? A->mau : A->tu; //If rut gon 
	for (C; 0 < C; C--) {
		if ((A->tu % C == 0) && (A->mau % C == 0)) {
			break;
		}
	}
	A->tu = A->tu / C;
	A->mau = A->mau / C;
}

Phanso_t nhanps(Phanso_t A, Phanso_t B) {
	Phanso_t kq;
	kq.tu = A.tu * B.tu;
	kq.mau = A.mau * B.mau;
	return kq;
}

Phanso_t chiaps(Phanso_t A, Phanso_t B) {
	Phanso_t kq;
	kq.tu = A.tu * B.mau;
	kq.mau = A.mau * B.tu;
	return kq;
}

Phanso_t trups(Phanso_t A, Phanso_t B) {
	Phanso_t kq;
	kq.tu = A.tu * B.mau - (B.tu * A.mau);
	kq.mau = B.mau * A.mau;
	return kq;
}

HSSV info_hs(HSSV* A) {
	printf("\r\nHo ten HSSV: ");
	printf(A->hoten);
	printf("\r\nDia chi: ");
	printf(A->diachi);
	printf("\r\nMa so SV: ");
	printf(A->mssv);
	printf("\r\nSo DT: ");
	printf(A->phone);
	(A->sex == 1) ? printf("\r\nNam") : printf("\r\nNu");
	printf("\r\nTuoi: %d", A->tuoi);
}
