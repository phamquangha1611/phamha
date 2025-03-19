#include <stdio.h>

int main() {
    int n, i;
    double x, S = 0, sum = 0, sign = 1;

    // Nh?p n v� x t? b�n ph�m
    printf("Nh?p n (nguy�n d??ng): ");
    scanf("%d", &n);
    printf("Nh?p x: ");
    scanf("%lf", &x);

    // Ki?m tra ?i?u ki?n h?p l?
    if (n <= 0) {
        printf("n ph?i l� s? nguy�n d??ng!\n");
        return 1;
    }

    // T�nh t?ng S theo c�ng th?c
    for (i = 1; i <= n; i++) {
        sum += i; // T�nh t?ng 1 + 2 + ... + i
        S += sign * (x / sum); // C?ng ho?c tr? theo d?u (-1)^(i+1)
        sign *= -1; // ??i d?u
    }

    // Th�m gi� tr? 1 v�o t?ng S
    S += 1;

    // In k?t qu?
    printf("T?ng S = %.6lf\n", S);

    return 0;
}

	
		
	

	