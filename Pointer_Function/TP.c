#include "TP.h"

float tichphan(float x0, float x1, float (*fx)(float)) {
	float y0 = 0;
	float y1 = 0;
	float h = 0;
	float tich_phan = 0;
	float S_hthang = 0;

	h = (x1 - x0) / 1000;		//Lay mau 1000 lan

	float c0 = x0;
	for (float c1 = x0 + h; c1 <= x1; c1 = c1 + h) {
		y0 = fx(c0);
		c0 = c1;
		y1 = fx(c1);
		S_hthang = h * ((y0 + y1) / 2);
		tich_phan += S_hthang;
	}
	return tich_phan;
}