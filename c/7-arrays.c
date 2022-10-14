#include <stdio.h>

int main() {
	int arr[10];
	for (int x = 0; x < 10; x++) {
		arr[x] = x * x;
	}
	printf( "The 7th index of arr is %d\n", arr[7] );
	getchar();
}
