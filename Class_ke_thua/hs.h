#include "ttcn.h"

typedef enum phanloai{
	Gioi,
	Kha,
	TrungBinh,
	Kem
}loaihs;

class info_hs:public info {
public:
	int diemToan;
	int diemLy;
	int diemAnh;
	loaihs loai;
	float tb;

	void nhapdiem(int toan, int ly, int anh);
	void tinhdiemtb();
};
