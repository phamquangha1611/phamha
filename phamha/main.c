#include <stdio.h>
void main() {
	int arr[] = { 1,2,3,4,4,5,5,3,2,2,4,5 };
	int so_lon_nhat = 0;
	int so_luong_doi_tuong = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < so_luong_doi_tuong; i++) {
		if (so_lon_nhat < arr[i]) {
			so_lon_nhat = arr[i];
		}
		for (int i = 0; i < so_luong_doi_tuong; i++) {
			if (arr[i] == so_lon_nhat)
				printf("%d ", i);
		}

	}
}
	