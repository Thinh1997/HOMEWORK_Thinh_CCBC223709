#include "hs.h"

void info_hs::nhapdiem(int toan, int ly, int anh){
	this->diemAnh = anh;
	this->diemLy = ly;
	this->diemToan = toan;
}

void info_hs::tinhdiemtb() {
	this->tb = (this->diemAnh + this->diemLy + this->diemToan) / 3;
	if (this->tb >= 8) {
		this->loai = Gioi;
	}
	else if ((this->tb >=7) && (this->tb < 8)) {
		this->loai = Kha;
	}
	else if ((this->tb > 4.5) && (this->tb < 7)) {
		this->loai = TrungBinh;
	}
	else {
		this->loai = Kem;
	}
}
