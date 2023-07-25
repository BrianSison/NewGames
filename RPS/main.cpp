#include <iostream>

#include "computer.h"
#include "computer.cpp"

#include "player.h"
#include "player.cpp"

#include "Gamesetting.h" 
#include "Gamesetting.cpp"

int main(){
    computer Computer;
    player Player;
    Gamesetting Winner;

    char difficulty = 'e';
    int playerPick = 1;

    std::cout << Computer.GameDifficulty(difficulty) << std::endl;
    std::cout << Computer.ComputerPicks() << std::endl;

    std::cout << Player.PlayerPicks(playerPick);   

    int x = Player.PlayerPicks(playerPick);
    int y = Computer.ComputerPicks();

    std::cout << std::endl << Winner.Wins(x, y);

}