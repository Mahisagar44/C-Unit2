//
//  L04_Memory.cpp
//  Unit02_Lesson04_Understanding_Memory
//

#include "L04_Memory.h"

// local variable
void makeItNoMystery(char *mystery) {
    mystery = (char *)malloc(3);
    mystery[0] = 'N';
    mystery[1] = 'O';
    mystery[2] = '\0';
}

char *makeMystery() {
    char *mystery = (char *)malloc(4);
    mystery[0] = 'm';
    mystery[1] = 'y';
    mystery[2] = 's';
    mystery[3] = '\0';
    makeItNoMystery(mystery);
    return mystery;
}

static void three_things_i_learnt() {
    /*
     -
     -
     -
     */
}