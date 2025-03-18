#include <stdio.h>
void main() {
	int arr[] = { 1,2 };
	int c = arr[0];
	arr[0] = arr[1]; 
	arr[1] = c;
	printf("arr[0] = %d, arr[1] = %d ", arr[0], arr[1]);
	}
		
	
		
	

	