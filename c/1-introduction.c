#include <stdio.h>

int main() {
	printf("Hello world!");
	getchar();

	int n;
	printf( "Please enter a numeral: " );
	scanf( "%d", &n );
    printf( "You entered %d", n );
    getchar();

	return 0;
}
