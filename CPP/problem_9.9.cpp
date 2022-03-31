/*
 * CH-230-A
 * a9_p9.cpp
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <iostream>
using namespace std;

string replaceAllVowels(string str) {
    int size = str.length();
    for(int i=0; i<size; i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'y'){
            str[i] = '_';
        }
    }
    return str;
}

int main() {
    string words[17] = {"computer", "television", "keyboard", "laptop", "mouse", "notebook", "apple", "banana", "charger",
                        "keys", "jacket", "backpack", "window", "table", "shelf", "importance", "sky"};
    while(1){
        srand(static_cast <unsigned int >(time (0)));
        int choice = rand() % 17;
        int countOfTry = 0, check = 1;
        string wordToGuess = replaceAllVowels(words[choice]), wordToTry;
        cout << wordToGuess << endl;
        while(check == 1){
            cout << "Enter the string - ";
            cin >> wordToTry;
            countOfTry++;
            if(wordToTry == words[choice]){
                cout << "\nCongratulations, you win!!\nNumber of tries - " << countOfTry << endl;
                check = 0;
            }
        }
        cout << "\n\nWould you like to play one more time?" << endl;
        cin >> wordToTry;
        if(wordToTry == "quit"){
            return 0;
        }
    }
}
