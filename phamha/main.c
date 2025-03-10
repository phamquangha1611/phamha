#include <stdio.h>

void main() {
	int a = 0;
	int b = 0;
	int c = 0;
	printf("nhap vao gia tri a:");
	scanf_s("%d", &a);
	printf("nhap vao gia tri b:");
	scanf_s("%d", &b);
	printf("nhap vao gia tri c:");
	scanf_s("%d", &c);
	if (a > b && a > c) {
		printf(" gia tri lon nhat la a");
	}
	else if (b > a && b > c) {
		printf("gia tri lon nhat la b ");
	}
	else {
		printf(" gia tri lon nhat la c ");
	}
}
