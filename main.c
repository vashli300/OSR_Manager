#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int roll20() {
	srand(time(NULL));
	int i = rand() % 20;
	return i;
}

int main() { 
	int out20 = roll20();
	printf("%d\n", out20);
	return 0;
}

