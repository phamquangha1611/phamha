#include <stdio.h>
int main() {
	int n = 0;
	printf("nhap gia tri cua n:");
    scanf_s("%d", &n);
	int tong = 0;
	for (int i = 1; i <= n; i++) {
		tong = tong + i;
		
	}
	printf(" tong la: %d", tong);
}
