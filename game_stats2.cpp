// Game Stats 3.0
// Demonstrates constants

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    const int ALIEN_POINTS = 100;
    int aliensKills = 10;
    int score = aliensKills * ALIEN_POINTS;
    cout << "Score: " << score << endl;

    enum difficulty {NOVICE, EASY, NOMAL, HARD, UNBEATABLE};
    difficulty gameDifficulty = HARD;
    cout << gameDifficulty << endl;

    enum shipCost {FIGHTER_COST = 25, BOMBER_COST, CRUISER_COST = 50};
    shipCost myShipCost = BOMBER_COST;

    cout << "To upgrade my ship to a Cruiser will cost " << 
    (CRUISER_COST - myShipCost) << " Resources Points." << endl;
    return 0;
}