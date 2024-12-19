// Text based maze game
// Navigate a grid-based maze
// Encounter obstacles and hidden treasures
// Wins by finding the treasure

// Setting up game loop

#include <iostream> // Include the input/output library
#include <string>   // Include the string library (not used here yet, but useful for future steps)

// Function to display the menu options to the player
void displayMenu() {
    std::cout << "=== Maze Game ===\n"; // Title of the game
    std::cout << "1. Move Up\n";        // Option to move up
    std::cout << "2. Move Down\n";      // Option to move down
    std::cout << "3. Move Left\n";      // Option to move left
    std::cout << "4. Move Right\n";     // Option to move right
    std::cout << "5. Exit\n";           // Option to exit the game
    std::cout << "Enter your choice: "; // Prompt for player input
}

int main() {
    int choice; // Variable to store the player's choice

    // Infinite loop to keep the game running until the player chooses to exit
    while (true) {
        displayMenu(); // Call the function to display the menu
        std::cin >> choice; // Read the player's choice from the keyboard

        // Perform actions based on the player's choice
        switch (choice) {
            case 1: // If the player chooses 1
                std::cout << "You moved up.\n"; // Output a message
                break; // Exit this case
            case 2: // If the player chooses 2
                std::cout << "You moved down.\n"; // Output a message
                break; // Exit this case
            case 3: // If the player chooses 3
                std::cout << "You moved left.\n"; // Output a message
                break; // Exit this case
            case 4: // If the player chooses 4
                std::cout << "You moved right.\n"; // Output a message
                break; // Exit this case
            case 5: // If the player chooses 5
                std::cout << "Exiting the game. Goodbye!\n"; // Output a goodbye message
                return 0; // Exit the program
            default: // If the player enters anything else
                std::cout << "Invalid choice. Try again.\n"; // Output an error message
        }
    }

    // Note: This point in the code will never be reached because of the infinite loop.
}
