#include <stdio.h>
void main() {
	int sum_arr = 0;
	int arr[10];
	for (int i = 0; i < 10; i++) {
		printf(" nhap phan tu cua mang:  %d", i );
		scanf_s("%d", & arr[i]);
		sum_arr += arr[i];
		}
	
	printf(" tong la:  %d", sum_arr);
	}

