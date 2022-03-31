/*
 * CH-230-A
 * a9_p5.cpp
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <iostream>
using namespace std;

int main() {
    //initialize variables
    string name;
    int num, guess, numberOfTries = 0;
    bool check = false;
    //read name
    cout << "Hello, you are playing a game 'Guess Number'" << endl;
    cout << "Please, enter your name - ";
    cin >> name;
    //choose a random number every time
    srand(static_cast <unsigned int >(time (0)));
    guess = rand()%100 + 1;
    //using loop
    while(!check){
        //read number
        cout << "Enter the number - ";
        cin >> num;
        //count number of tries
        numberOfTries++;
        //check if the number equal, higher, or lower than the guessing number
        if(num == guess){
            //if player guessed the number, stop the loop
            check = true;
            cout << "\nCongratulations," << name << "!!!\nYou win!!!" << "\nNumber of tries = " << numberOfTries << endl;
        } else if(num < guess) {
            cout << "Your number is lower than number you are guessing" << endl;
        } else {
            cout << "Your number is higher than number you are guessing" << endl;
        }
    }
    return 0;
}
