#include <stdio.h>

class info_HS {
public: int tuoi;
		bool sex;
		char* hoten;
		char* tongiao;
		char* masohs;
		char* lop;
		int height;
		int weight;
		
		void nhapinfo(char* hoten, char* tongiao, char* masohs, char* lop,
					  bool sex, int tuoi, int height, int weight);
};
