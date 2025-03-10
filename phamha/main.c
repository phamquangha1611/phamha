#include <stdio.h>
#include <math.h>
void main() {
	float a = 0;
	float b = 0;
	float c = 0;
	float delta = 0;
	float x1 = 0;
	float  x2 = 0;
	printf(" nhap gia tri cua a ");
	scanf_s("%f", &a);
	printf(" nhap gia tri cua b ");
	scanf_s("%f", &b);
	printf(" nhap gia tri cua c ");
	scanf_s("%f", &c);
	if (a == 0) {
		if (b == 0) {
			if (c == 0) {
				printf("phuong trinh vo so nghiem.\n");
			}
			else {
				printf("phuong trinh vo nghiem.\n");
			}
		}
		else {
			printf("phuong trinh co nghiem x = %d", -c / b);
		}
	}
	else {
		delta = b * b - 4 * a * c;
		if (delta > 0) {
			x1 = (-b + sqrtf(delta)) / 2 * a;
			x2 = (-b - sqrtf(delta)) / 2 * a;
			printf(" phuong trinh co 2 nghiem phan biet:");
			printf(" nghiem thu nhat x1: %f", x1);
			printf(" nghiem thu nhat x2: %f", x2);
		}
		else if (delta = 0) {
			x1 = x2 = -b / 2 * a;
			printf(" phuong trinh co nghiem kep");
			printf(" nghiem x1=x2: %f", x1);
		}
		else {
			printf(" phuong trinh vo nghiem");
		}

	}
}
