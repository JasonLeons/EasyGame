// Game Stats 3.0
// Demonstrates constants

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(int argc, char const *argv[])
{
    /*
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
    

    const int GOLD_PIECES = 900;
    int adventurers, killed, survivors;
    string leader;

    // get the information

    cout << "Welcome to Lost Fortune!" << endl;
    cout << "Please enter the following for your personalized adverture\n";

    cout << "Enter the number: ";
    cin >> adventurers;

    cout << "Enter the number, smaller than the first: ";
    cin >> killed;

    cout << "Enter the last name: ";
    cin >> leader;

    //tell the story
    cout << "\nA brave group of " << adventurers << " set out on a quest ";
    cout << " -- in search of the lost treasure of the Ancient Dwarves. ";
    cout << "The group was led by that legendary rogue, " << leader << ".\n";
    cout << "\nAlong the way, a band of marauding ogres ambushed the party. ";
    cout << "All fought bravely under the command of " << leader;
    cout << ", and the ogres were defeated, but at a cost. ";
    cout << "Of the adventurers, " << killed << " were vanquished, ";
    cout << "leaving just " << survivors << " in the group.\n";

    cout << "\nThe party was about to give up all hope. ";
    cout << "But while laying the deceased to rest, ";
    cout << "they stumbled upon the buried fortune. ";
    cout << "So the adventurers split " << GOLD_PIECES << " gold pieces.";
    cout << leader << " held on to the extra " << (GOLD_PIECES % survivors) ;
    cout << " pieces to keep things fair of course.\n";
    
   
    // Designers Networks
    // Demonstrates logical operations

    string username;
    string password;
    bool success;

    cout << "\tGame Designer's Network\n";
    do
    {
        cout << "Enter your username: ";
        cin >> username;

        cout << "Enter your password: ";
        cin >> password;

        if (username == "Leon" && password == "0988")
        {
            cout << "\nHey, Sid.";
            success = true;
        }

        else if (username == "S.Miyamoto" && password == "mariobros")
        {
            cout << "\nHey, Luigi.";
            success = true;
        }
        
        else
        {
            cout << "\nSorry, wrong credentials. Try again.\n";
            success = false;
        }
    } while (!success);
    

    srand(static_cast<unsigned int>(time(NULL)));
    int randomNumber = rand() % 100 + 1;
    int guess{}, tries{};
    do
    {
        cout << "Enter a random number: ";
        cin >> guess;
        ++tries;

        if (guess > randomNumber)
        {
            cout << "Too hight!\n";
        }
        else if (guess < randomNumber)
        {
            cout << "Too low!\n";
        }
        else
        {
            cout << "\nCongratulations! You guessed the number in " << tries << " tries.\n";
            break;
        }

        if(tries >= 5){
            cout << "You've reached the maximum number of tries. Better luck next time.\n";
            break;  // Exit the loop if the player has reached the maximum number of tries.  // End the game here.  // If you want to keep playing, remove this line.  // This line makes the game end after 5 wrong guesses.  // If you want to keep playing, remove this line.  // This line makes the game end after 5 wrong guesses.  // If you want to keep playing, remove this line.  // This line makes the game end after 5 wrong guesses.  // If you want to keep playing, remove this line.  // This line makes the game end after 5 wrong guesses.  // If you want to keep playing, remove this line.  // This line makes the game end after 5 wrong guesses.  // If you want to keep playing, remove this line.
        }
    } while (guess != randomNumber);
    

    string word1 = "Game";
    string word2("Over");
    string word3(3, '!');

    string phrase = word1 + " " + word2 + word3;
    cout << "The phrase is " << phrase << endl;

    cout << "The phrase has " << phrase.size() << " characters in it." << endl;
    cout << "The character at position 0 is " << phrase[0] << endl;

    cout << "Changing the character at position 1: " << phrase[1] << " to ";
    phrase[1] = 'B';

    cout << "The phrase is now: " << phrase << endl;

    for (unsigned int i = 0; i < phrase.size(); i++)
    {
        cout << "Character at position " << i << " is " << phrase[i] << endl;
    }

    cout << "The sequece 'Over' begin at location ";
    cout << phrase.find("Over") << endl;

    if (phrase.find("eggplant") == string::npos)
    {
        cout << "'eggplant' is not in the phrase." << endl;
    }

    phrase.erase(4, 5);
    cout << "The phrase is now: " << phrase << endl;

    phrase.erase(4);
    cout << "The phrase is now: " << phrase << endl;

    phrase.erase();
    cout << "The phrase is now: " << phrase << endl;

    if(phrase.empty()) cout << "The phrase is empty." << endl;
    */

    const int MAX_ITEMS = 10;
    string inventory[MAX_ITEMS];

    int numItems = 0;
    inventory[numItems++] = "sword";
    inventory[numItems++] = "armor";
    inventory[numItems++] = "shield";

    cout << "Your items: " << endl;
    for (int i = 0; i < numItems; i++)
    {
        cout << inventory[i] << endl;
    }

    cout << "You trade sword for a battle: " << endl;
    inventory[0] = "battle";
    cout << "Your items: " << endl;
    for (size_t i = 0; i < numItems; i++)
    {
        cout << inventory[i] << endl;
    }

    cout << "The item name '" << inventory[0] << "' has ";
    cout << inventory[0].size() << " letters in it." << endl;
    
    cout << "You find a healing potion.";
    if (numItems > MAX_ITEMS)
    {
        inventory[numItems++] = "healing potion";
    }
    else cout << "You have too many items and can't carry another.";
    cout << "Your items: " << endl;
    for (int i = 0; i < numItems; i++)
    {
        cout << inventory[i] << endl;
    }
    
    return 0;
}