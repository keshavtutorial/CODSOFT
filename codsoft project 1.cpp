#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    
    std::srand(std::time(0)); 
    int random_number = std::rand() % 100 + 1; 

    int user_guess = 0;
    int attempts = 0;

    std::cout << "Welcome to the Guessing Game!\n";
    std::cout << "I have selected a random number between 1 and 100.\n";
    std::cout << "Try to guess the number!\n";

    
    do {
        std::cout << "Enter your guess: ";
        std::cin >> user_guess;
        attempts++;

        if (user_guess < random_number) {
            std::cout << "Too low! Try again.\n";
        } else if (user_guess > random_number) {
            std::cout << "Too high! Try again.\n";
        } else {
            std::cout << "Congratulations! You guessed the correct number in " << attempts << " attempts.\n";
        }
    } while (user_guess != random_number);

    return 0;
}
