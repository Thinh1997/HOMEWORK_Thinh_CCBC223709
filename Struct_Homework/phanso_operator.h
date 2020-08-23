#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct Phanso {
	int tu;
	int mau;
}Phanso_t;

typedef struct Info_HSSV {
	char hoten[20];
	char mssv[8];
	int tuoi;
	bool sex;
	char diachi[50];
	char phone[11];
}HSSV;

Phanso_t trups(Phanso_t A, Phanso_t B);
Phanso_t congps(Phanso_t A, Phanso_t B);
Phanso_t nhanps(Phanso_t A, Phanso_t B);
Phanso_t chiaps(Phanso_t A, Phanso_t B);
void rutgon(Phanso_t * A);
HSSV info_hs(HSSV* A);
