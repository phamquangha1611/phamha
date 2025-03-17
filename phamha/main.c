#include <stdio.h>
void main() {
	int arr[10] ;
	int trung_binh_cong = 0;
	int tong = 0;
	int dem = 0;
	for (int i = 0;i< 10 ; i++) {
		printf(" Nhap vao phan tu %d = ", i);
		scanf_s("%d", &arr[i]);
		if ( arr[i] %2 != 0) {
			tong = arr[i] + tong;
			dem++;
		}
		
	}
	trung_binh_cong = (double)tong / dem;
	printf(" trung binh cong cua cac so le la: %d", trung_binh_cong);
	}