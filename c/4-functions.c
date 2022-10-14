#include <stdio.h>

int mult( int x, int y );

int main() {
	int x = 5;
	int y = 10;
	int prod = mult( x, y );
	printf( "The product of x and y is %d\n", prod );
}

int mult( int x, int y ) {
	return x * y;
}
