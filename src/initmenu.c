#include <stdio.h>
#include "../include/initmenu.h"
#include "../include/dice.h"
#include <string.h>

void initmenu() {
    printf("# WELCOME TO THE OD&D MANAGER.\nPLEASE ENTER A COMMAND.\n");
    interface();
}

int  interface() {
    printf("\n> ");
    char input[50];

    fgets(input, sizeof(input), stdin);
    sscanf(input, "%s", input);

    if(strcmp(input, "roll") == 0) {
        diceRoller();
    } else if(strcmp(input, "quit") == 0) {
        return 0;
    } else {
        printf("# INVALID. ERR_SIGABRT. PLEASE TRY AGAIN");
    }
    
    return interface();

}
