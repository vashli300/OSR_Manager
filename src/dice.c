#include <time.h>
#include <math.h>
#include <stdlib.h>
#include "../include/dice.h"
#include <stdio.h>

int roll(int x, int d) {
	srandom(time(NULL));
    int i, result = 0;
	for (i = 0; i < x; i++) 
    {
        int roll = arc4random() % d + 1; // becomes between 1 and number
        result = result + roll;
    }
	return result;

}

 
void rollSimultaneous(int x, int d) {
	srandom(time(NULL));
    int i, result = 0;
	for (i = 0; i < x; i++) 
    {
        int roll = arc4random() % d + 1; // becomes between 1 and number
        result = result + roll;
        printf("%d ", result);
        result = 0;
    }
	return;

}

int diceRoller(){
	char input[50];
    int x, d;

    printf("> NUMBER OF ROLLS? ");
    fgets(input, sizeof(input), stdin);
    sscanf(input, "%d", &x);

    printf("> WHAT SIDED DIE? ");
    fgets(input, sizeof(input), stdin);
    sscanf(input, "%d", &d);
	
	int output = roll(x,d);
	printf("> TOTAL ROLL IS %d", output);
	return 0;
}

int diceRollerSimultaneous(){
	char input[50];
    int x, d;

    printf("> NUMBER OF ROLLS? ");
    fgets(input, sizeof(input), stdin);
    sscanf(input, "%d", &x);

    printf("> WHAT SIDED DIE? ");
    fgets(input, sizeof(input), stdin);
    sscanf(input, "%d", &d);
	
    printf("> YOUR ROLLS ARE ");

	rollSimultaneous(x,d);
	return 0;
}
