#include <stdio.h>
void main() {
	float x = 0;
	float n = 0;
	printf("nhap vao gia tri tien dien: ");
	scanf_s("%f", &x);
	if (x > 0 && x < 50) {
		n = x * 1.678;
		printf(" gia tri tien dien la: n %f", n);
	}
	else if (x > 51 && x < 100) {
		n = x * 1.734;
		printf(" gia tri tien dien la: n %f", n);
	}
	else if (x > 101 && x< 200) {
		n = x * 2.014;
		printf(" gia tri tien dien la: n %f", n);
	}
	else if (x>201 && x<300) {
		n = x * 2.536;
		printf(" gia tri tien dien la: n %f", n);
	}
	else if (x > 301 && x<400) {
		n = x * 2.834;
		printf(" gia tri tien dien la: n %f", n);
	}
	else {
		n = x * 2.927;
		printf("gia tri tien dien la: n %f", n);
	}
}
