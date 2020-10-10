#include "bai1.h"

void SetBit(int* RegAddr, int Val, int Valsize, int Pos) {
	for (int i = Pos; i <= (Valsize + Pos); i++) {
		int temp = ~(1 << (Pos + i));
		*RegAddr = *RegAddr & temp;
	}
	*RegAddr = *RegAddr | (Val << Pos);
}
