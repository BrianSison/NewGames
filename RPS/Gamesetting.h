#ifndef GAMESETTING_H
#define GAMESETTING_H

#pragma once

class Gamesetting
{
public:
    Gamesetting();
    int Wins(int player, int computer);

private:
    int PlayerPick, ComputerPick;
};

#endif