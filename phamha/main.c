#include <stdio.h>

void main() {
	int x = 0;
	int y = 0;
	printf("nhap gia tri cho x: ");
	scanf_s("%d", &x);
	printf("nhap gia tri cho y: ");
	scanf_s("%d", &y);
	if (x > y) {
		printf(" gia tri lon nhat la x %d",x);
	}
	else {
		printf(" gia tri lon nhat la y %d",y);
	}
		
}