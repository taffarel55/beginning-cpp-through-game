#include <iostream> 
#include <cstdlib> 
#include <ctime> 
using namespace std;

int main() { 
    srand(static_cast<unsigned int>(time(0))); //seed random number generator 
    int tries = 0; 
    int guess, lowerLimit=1, upperLimit=100;
    cout << "\tWelcome to Guess My Number\n\n";
    cout << "Enter a secret number: "; 
    int secretNumber;
    cin >> secretNumber;
    do { 
        // tries a random number between lowerLimit and upperLimit 
        guess = rand() % (upperLimit-lowerLimit+1) + lowerLimit; 
        cout << "The computer tries: "<<guess<<endl; 
        ++tries; 
        if (guess > secretNumber) { 
            cout << "Too high!\n\n"; 
            upperLimit = guess;
        } else if (guess < secretNumber) { 
            cout << "Too low!\n\n"; 
            lowerLimit = guess;
        } else { 
            cout << "\nThat’s it! The PC got it in " << tries << " guesses!\n"; 
        } 
    } while (guess != secretNumber);
    return 0;
}