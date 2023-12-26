// including required header files
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Seed the random number generator with the current time
    srand(static_cast<unsigned int>(time(nullptr)));

    int userChoice, computerChoice, userScore = 0, computerScore = 0;
    char playAgain;

    do {
        // Display menu and get user's choice
        cout << "Welcome to Rock, Paper, Scissors!" << endl;
        cout << "1. Rock\n2. Paper\n3. Scissors\nEnter your choice (1/2/3): ";
        cin >> userChoice;

        // Generate a random choice for the computer (1 for Rock, 2 for Paper, 3 for Scissors)
        computerChoice = rand() % 3 + 1;

        // Determine the winner
        if (userChoice == computerChoice) {
            cout << "It's a tie!" << endl;
        } else if ((userChoice == 1 && computerChoice == 3) || 
                    (userChoice == 2 && computerChoice == 1) || 
                    (userChoice == 3 && computerChoice == 2)) {
            cout << "You win!" << endl;
            userScore++;
        } else {
            cout << "Computer wins!" << endl;
            computerScore++;
        }

        // Display the choices made by the user and the computer
        cout << "Your choice: ";
        switch (userChoice) {
            case 1:
                cout << "Rock";
                break;
            case 2:
                cout << "Paper";
                break;
            case 3:
                cout << "Scissors";
                break;
        }

        cout << "\nComputer's choice: ";
        switch (computerChoice) {
            case 1:
                cout << "Rock";
                break;
            case 2:
                cout << "Paper";
                break;
            case 3:
                cout << "Scissors";
                break;
        }

        cout << "\nScore - You: " << userScore << " Computer: " << computerScore << endl;

        // Ask the user if they want to play again
        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "Thanks for playing!" << endl;

    return 0;
}
