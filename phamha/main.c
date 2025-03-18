#include <stdio.h>
void main() {
	int arr[] = { 1,-1,-2,-3,-4,-5,-6,-7,-8 };
	int i = 0;
	for ( ; i< 10; i++){
		if (arr[i] < 0){
			arr[i] = 0;
		}
	}
	printf(" in cac gia tri am bang 0: %d", arr[i]);
}
	