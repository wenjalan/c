#include <stdio.h>

int main() {
	int x = 5;
	int y = 10;
	if (x > y) {
		printf( "x is greater than y" );
	}
	else if (y > x) {
		printf( "y is greater than x" );
	}
	else {
		printf( "x is equal to y" );
	}
	return 0;
}
