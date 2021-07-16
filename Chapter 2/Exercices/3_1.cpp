#include <iostream> 
#include <cstdlib> 
#include <ctime> 
using namespace std;

int main() { 
    srand(static_cast<unsigned int>(time(0))); //seed random number generator 
    int tries = 0; 
    int guess;
    cout << "\tWelcome to Guess My Number\n\n";
    cout << "Enter a secret number: "; 
    int secretNumber;
    cin >> secretNumber;
    do { 
        guess = rand() % 100 + 1; // tries a random number between 1 and 100 
        cout << "The computer tries: "<<guess<<endl; 
        ++tries; 
        if (guess > secretNumber) { 
            cout << "Too high!\n\n"; 
        } else if (guess < secretNumber) { 
            cout << "Too low!\n\n"; 
        } else { 
            cout << "\nThat’s it! The PC got it in " << tries << " guesses!\n"; 
        } 
    } while (guess != secretNumber);
    return 0;
}