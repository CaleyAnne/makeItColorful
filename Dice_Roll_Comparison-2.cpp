#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Seed the random number generator
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // Variables to store player names and rolls
    std::string player1, player2;
    int roll1, roll2;

    // Get player names
    std::cout << "Enter the name for Player 1: ";
    std::cin >> player1;
    std::cout << "Enter the name for Player 2: ";
    std::cin >> player2;

    // Roll a 20-sided die for each player
    roll1 = std::rand() % 20 + 1;
    roll2 = std::rand() % 20 + 1;

    // Determine if the rolls were critical success or critical failure
    std::string result1 = (roll1 == 1) ? "Critical Failure" : ((roll1 == 20) ? "Critical Success" : "");
    std::string result2 = (roll2 == 1) ? "Critical Failure" : ((roll2 == 20) ? "Critical Success" : "");

    // Display the rolls and results
    std::cout << "\nRolls:\n";
    std::cout << player1 << ": " << roll1;
    if (!result1.empty()) std::cout << " (" << result1 << ")";
    std::cout << "\n";
    
    std::cout << player2 << ": " << roll2;
    if (!result2.empty()) std::cout << " (" << result2 << ")";
    std::cout << "\n";

    // Determine the winner
    if (roll1 > roll2) {
        std::cout << "\nWinner: " << player1 << "\n";
    } else if (roll1 < roll2) {
        std::cout << "\nWinner: " << player2 << "\n";
    } else {
        std::cout << "\nPlayers were Evenly Matched.\n";
    }

    return 0;
}
