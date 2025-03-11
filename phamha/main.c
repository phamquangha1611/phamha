#include <stdio.h>
void main() {
	int TTCN = 0;
	printf(" thu nhap ca nhan la: \n");
	scanf_s("%d", &TTCN);
	float thueTTCN = 0;
	float thunhapchiuthue = 0;
	if (thunhapchiuthue <= 5000000) {
		thueTTCN = TTCN * 0.05;
		printf(" thue thu nhap ca nhan la: thueTTCN %f" , thueTTCN);
	}
	else if (thunhapchiuthue > 5000000 && thunhapchiuthue <=  10000000) {
		thueTTCN = TTCN * 0.1;
		printf(" thue thu nhap ca nhan la: thueTTCN %f" ,thueTTCN);
	}
	else if ( thunhapchiuthue > 10000000 && thunhapchiuthue <= 18000000) {
		thueTTCN = TTCN * 0.15;
		printf(" thue thu nhap ca nhan la: thueTTCN %f" ,thueTTCN);
	}
	else if (thunhapchiuthue > 18000000 && thunhapchiuthue <= 32000000) {
		thueTTCN = TTCN * 0.2;
		printf(" thue thu nhap ca nhan la: thueTTCN %f", thueTTCN);
	}
	else if (thunhapchiuthue > 32000000 && thunhapchiuthue <= 52000000) {
		thueTTCN = TTCN * 0.25;
		printf(" thue thu nhap ca nhan la: thueTTCN %f" ,thueTTCN);
	}
	else if ( thunhapchiuthue > 52000000 && thunhapchiuthue <= 80000000) {
		thueTTCN = TTCN * 0.3;
		printf(" thue thu nhap ca nhan la: thueTTCN %f" ,thueTTCN);
	}
	else {
		thueTTCN = TTCN * 0.35;
		printf(" thue thu nhap ca nhan la: thue TTCN %f" , thueTTCN);
	}
}
