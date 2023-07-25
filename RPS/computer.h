#ifndef COMPUTER_H
#define COMPUTER_H

#pragma once

class computer
{
public:
    
    computer();
    char GameDifficulty(char difficulty);
    int ComputerPicks();
    
private:
    int num1, num2;
    char difficulty;

};

#endif