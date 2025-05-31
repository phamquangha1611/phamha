#pragma once
#include< stdio.h>
int Cong(int x, int y);
int Nhan(int x, int y);
int Cong(int x, int y) {
	int ketqua = 0;
	ketqua = x + y;

	return ketqua;

}
int Nhan(int x, int y) {
	int ketqua = 0;
	ketqua = x * y;
	return ketqua;
}
