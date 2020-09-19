#include "PhanSo.h"

PhanSo PhanSo::nhanps(PhanSo A) {
	PhanSo KQ;
	KQ.tu = this->tu * A.tu;
	KQ.mau = this->mau * A.mau;
	KQ.rutgon();
	return KQ;
}

PhanSo PhanSo::chiaps(PhanSo A) {
	PhanSo KQ;
	KQ.tu = this->tu * A.tu;
	KQ.mau = this->mau * A.tu;
	KQ.rutgon();
	return KQ;
}

PhanSo PhanSo::congps(PhanSo A) {
	PhanSo KQ;
	KQ.tu = (this->tu * A.mau) + (this->mau * A.tu);
	KQ.mau = this->mau * A.mau;
	KQ.rutgon();
	return KQ;
}

PhanSo PhanSo::trups(PhanSo A) {
	PhanSo KQ;
	KQ.tu = (this->tu * A.mau) - (this->mau * A.tu);
	KQ.mau = this->mau * A.mau;
	KQ.rutgon();
	return KQ;
}

void PhanSo::rutgon() {
	int a = 0;
	bool b = 0;

	if (this->tu > this->mau) {
		a = this->mau;
	}
	else {
		a = this->tu;
	}

	if (a < 0) {
		b = 1;
		a = a * -1;
	}
	else {
		b = 0;
	}

	for (a; a >= 1; a--) {
		if (this->tu % a == 0 && this->mau % a == 0) {
			break;
		}
	}

	if (a != 0) {
		this->tu = this->tu / a;
		this->mau = this->mau / a;
	}
	else {
		this->tu = 0;
		this->mau = 0;
	}


	if (b != 0) {
		this->tu = this->tu * -1;
	}
}
