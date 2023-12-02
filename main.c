#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int roll20() {
	int i = rand() % 20;
	return i;
}

int main() { 
	int out20 = roll20();
	printf("%d\n", out20);
	return 0;
}

