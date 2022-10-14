#include <stdio.h>
#include <stdlib.h>

int main() {
	int x = 10;
	int* x_p = &x;
	printf( "The value of x is %d\n", *x_p );

	int* y_p = malloc( sizeof( int ) );
	free( y_p );
	y_p = 0;
	getchar();
}
