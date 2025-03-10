#include <stdio.h>
void main() {
	int x = 0;
	printf("nhap vao gia tri cua x: \n");
	scanf_s("%d", &x);
	if (x % 2 == 0) {
		printf(" day la so chan");
	}
	else {
		printf(" day la so le");
	}
}
