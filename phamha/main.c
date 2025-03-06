#include <stdio.h>

void main() {
	float a = 0.0;
	printf("nhap gia tri cua a :");
	scanf_s("%f", &a);
	if (a >= 8.0) {
		printf(" gioi");
	}
	else if (a < 8.0 && a >= 6.5){
		printf(" kha ");
}
	else if (a < 6.5 && a >= 5.0) {
		printf(" trung binh ");
}
	
	else {
		printf(" yeu ");
	}
}