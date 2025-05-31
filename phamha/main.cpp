#include <stdio.h>
#include <math.h>
#include<iostream>
class giai_phuong_trinh_bac_2 {
	float a;
	float b;
	float c;
	float x1;
	float x2;
	float x;
public:
	void nhapheso() {
		printf("Nhap he so a, b, c: ");
		scanf_s("%f %f %f", &a, &b, &c);
	}
	double delta() {
		return b * b - (4 * a * c);
	}
	void giai_pt() {
		if (a == 0)
		{
			if (b != 0) {
				x = -c / b;
				printf("Phuong trinh la bac nhat va co nghiem la x = %f\n", x);
			}
			else printf("Phuong trinh vo nghiem.\n");
		}
		else if (delta() < 0) {
			printf("Phuong trinh vo nghiem.\n");
		}
		else if (delta() == 0) {
			x = -b / (2 * a);
			printf("Nghiem cua phuong trinh la : x = %f", x);
		}
		else {
			x1 = (-b - sqrt(delta())) / (2 * a);
			x2 = (-b + sqrt(delta())) / (2 * a);
			printf("Phuong trinh co 2 nghiem la x1 = %.2f\t x2 = %.2f\n", x1, x2);
		}
	}
};
int main() {
	giai_ptb2 A;
	A.nhapheso();
	A.giai_pt();
	return 0;
}
