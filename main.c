#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int roll20() {
	srandom(time(NULL));
	int i = arc4random() % 20 + 1; // becomes between 1 and 20
	return i;
}

int main() { 
	int out20 = roll20();
	printf("%d\n", out20);
	return 0;
}

