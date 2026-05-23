#include "library.h"
int tich_2so(int so_nguyen_1, int so_nguyen_2) {
	int kQ = 0;
	for (int i = 0;i < so_nguyen_2;i++) {
		kQ = kQ + so_nguyen_1;
	}
	return kQ;
}
int cong_so_nguyen(int so_nguyen_1, int so_nguyen_2) {
	int kQ = 0;
	kQ = so_nguyen_1 + so_nguyen_2;
	return kQ;
}

