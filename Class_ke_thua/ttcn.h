#include <stdio.h>
#include <string.h>

typedef enum {
	nam,
	nu,
	khongbiet
}Gioitinh_t;

class info {
private:
	char address[60] = { 0 };

protected:
	char CMND[9] = { 0 };

public:
	char ten[35] = { 0 };
	int Tuoi;
	Gioitinh_t gioitinh;

	void nhapinfo(char* ten, int tuoi, Gioitinh_t gioitinh, char* address, char* CMND);
	info();
	info(char* ten, int tuoi);
	~info();
};
