// Text based maze game
// Navigate a grid-based maze
// Encounter obstacles and hidden treasures
// Wins by finding the treasure

// Setting up game loop

#include <iostream>
#include <string>

// Function to display the menu options to the player
void displayMenu() {
    std::cout << "Welcome to the Maze Game!\n"; // Title of game

    // Movement options
    std::cout << "1. Move Up\n"; 
    std::cout << "2. Move Down\n";
    std::cout << "3. Move Left\n";
    std::cout << "4. Move Right\n";

    // Option to exit the game
    std::cout << "5. Exit\n";

    //Prompt for player input
    std::cout << "Enter your choice: ";
}

