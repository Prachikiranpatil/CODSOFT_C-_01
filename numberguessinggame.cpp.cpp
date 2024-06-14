#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
	system("cls");
	system("Color B0"); 
   srand(time(0));
    int secretNumber = rand() % 100 + 1;
    int guess = 0;
    int numberOfGuesses = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have selected a number between 1 and 100. Can you guess it?" << endl;

    while (true) {
   cout << "Enter your guess: ";
   cin >> guess;

        numberOfGuesses++;
        if (guess == secretNumber) {
       cout << "Congratulations! You've guessed the number in " << numberOfGuesses << " tries." << endl;
            break;
        } else if (guess < secretNumber) {
      cout << "Too low! Try again." << endl;
        } else {
     cout << "Too high! Try again." << endl;
        }
    }

    return 0;
}

