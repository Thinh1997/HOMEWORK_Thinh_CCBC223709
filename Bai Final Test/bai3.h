#include <stdio.h>
#include <math.h>

class PT_bac2
{
public:
	PT_bac2(float A, float B, float C);
	~PT_bac2();
	float A;
	float B;
	float C;
	float findDelta(float A, float B, float C);
	void giaipt(float a, float b, float c);
};
