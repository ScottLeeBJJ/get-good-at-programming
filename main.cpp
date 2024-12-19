//Hello world program

#include <iostream> // Includes the input-output stream and allows you to use standard input/output operations like: std::cout for printing to console and std::cin for reading from the console

// int main() {
//     std::cout<<"Hello World!";
//     return 0;
// }

// Input and Output

using namespace std; // Allows you to avoid prefixing standard library functions and objects with std::

int main() { // Only one per program. Defines the main function, the entry point of your program. Every C++ program starts with execution from the 'main' function. The return type is 'int', and the function returns '0' at the end to indicate successful execution.
    int number; 
    cout << "Enter a number: ";
    cin >> number;
    cout << "You entered: " << number;
    return 0;
}