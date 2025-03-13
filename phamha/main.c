#include <stdio.h>
void main() {
	int c, n, tich = 1;
	printf("nhap so de tinh giai thua\n");
	scanf_s("%d", &n);
	for (c = 1; c <= n; c++) tich = tich * c;
	printf("giai thua cua %d = %d\n", n, tich);
	return 0;
}
