#include "bai3.h"

float PT_bac2::findDelta(float A, float B, float C) {
	float dt = B * B - 4 * A * C;
	return dt;
}

void PT_bac2::giaipt(){
	A = this->A;
	B = this->B;
	C = this->C;
	float dt = 0;
	dt = findDelta(A, B, C);
	printf("Delta cua pt: %.3f\r\n", dt);
	float sdt = 0;
	sdt = sqrt(dt);
	if (dt > 0) {
		printf("PT co 2 nghiem phan biet!\r\n");
		float no1 = 0;
		no1 = (-B + sdt) / (2 * A);
		printf("Nghiem dau tien: %.3f\r\n", no1);
		float no2 = 0;
		no2 = (-B - sdt) / (2 * A);
		printf("Nghiem thu hai: %.3f\r\n", no2);
	}
	else if (dt < 0) {
		printf("PT vo nghiem!");
	}
	else {
		printf("PT co nghiem kep!\r\n");
		float no = 0;
		no = -(B / 2 * A);
		printf("Nghiem kep: %.3f\r\n", no);
	}
}
