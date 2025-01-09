#include <stdio.h>

int simple_function() {
	int i=9;
	i++;
	return i;
}

int main (void ) {
	int i=0;
	printf ( "\n first line %ld\n", sizeof ( ++i ));
	printf ( "\n next line %d\n", simple_function ( ++i ));
}

