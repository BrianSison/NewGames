#include "computer.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

computer::computer(){
}

char computer::GameDifficulty(char x){
    if(x == 'E' || x == 'e'){
        return 'E';
    }
    else if(x == 'H' || x == 'h'){
        return 'H';
    }
    else{
        return 'I';
    }
}

int computer::ComputerPicks(){
    srand(time(0));
    int x = 1 + rand() % 3;
    return x;
}