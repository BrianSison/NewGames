#include "Gamesetting.h"
#include <iostream>

Gamesetting::Gamesetting()
{
}

int Gamesetting::Wins(int x, int y){
    if(x == 1 && y == 2) return 1;
    else if(x == 1 && y == 3) return 2;
    else if(x == 2 && y == 1) return 2;
    else if(x == 2 && y == 3) return 1;
    else if(x == 3 && y == 1) return 1;
    else if(x == 3 && y == 2) return 2;
    return 3;
}