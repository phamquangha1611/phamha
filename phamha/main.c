#include <stdio.h>
int main() {
	int loi = 0;
	for (int i = 1; i > 0; i++) {
		printf("nhap vao so: ");
		scanf_s("%d", &i);
		if (i == 0) {
			break;
		}
		if (loi >= 5) {
			printf(" nhap sai qua so lan");
		}
		}
	}

