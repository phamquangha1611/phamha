#include <stdio.h>
void main() {
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int so_phan_tu_mang = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < so_phan_tu_mang; i++) {
		if (arr[i] % 2 != 0) {
			printf(" cac gia tri le la: %d", arr[i]);
		}
		}
		
	}

	