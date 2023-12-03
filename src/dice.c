#include <time.h>
#include <math.h>
#include <stdlib.h>
#include "../include/dice.h"

int roll(int x, int d) {
	srandom(time(NULL));
    int i, result = 0;
	for (i = 0; i < x; i++) 
    {
        int result = arc4random() % d + 1; // becomes between 1 and number
        return result;
    }
	return result;

}
