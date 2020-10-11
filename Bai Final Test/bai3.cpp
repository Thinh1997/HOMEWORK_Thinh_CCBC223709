#include "bai3.h"

PT_bac2::PT_bac2(float A, float B, float C) {
	giaipt(A, B, C);
}

PT_bac2::~PT_bac2() {
	printf("Ket thuc tinh toan phuong trinh.");
}

float PT_bac2::findDelta(float A, float B, float C) {
	float dt = B * B - 4 * A * C;
	return dt;
}

void PT_bac2::giaipt(float a, float b, float c){
	float dt = 0;
	dt = findDelta(a, b, c);
	printf("Delta cua pt: %.3f\r\n", dt);
	float sdt = 0;
	sdt = sqrt(dt);
	if (dt > 0) {
		printf("PT co 2 nghiem phan biet!\r\n");
		float no1 = 0;
		no1 = (-b + sdt) / (2 * a);
		printf("Nghiem dau tien: %.3f\r\n", no1);
		float no2 = 0;
		no2 = (-b - sdt) / (2 * a);
		printf("Nghiem thu hai: %.3f\r\n", no2);
	}
	else if (dt < 0) {
		printf("PT vo nghiem!");
	}
	else {
		printf("PT co nghiem kep!\r\n");
		float no = 0;
		no = -(b / 2 * a);
		printf("Nghiem kep: %.3f\r\n", no);
	}
}
