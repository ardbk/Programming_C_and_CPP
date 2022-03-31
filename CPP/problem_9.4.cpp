/*
 * CH-230-A
 * a9_p4.cpp
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <iostream>
using namespace std;
//creating a function with integer input
int mycount(int a, int b){
    //return difference
    return b-a;
}
//creating a function with a char and a string input
int mycount(char ch, string str){
    //initialize a variable to count the number of the char and assign it to zero
    int count = 0;
    //using loop to go through each char in a string
    for(int i=0; i<(int)str.size(); i++){
        //check if the char and the char in a string are the same
        if(str[i] == ch) count++;
    }
    //return count
    return count;
}

int main() {
    //check the function for different conditions
    cout << mycount(7, 3) << endl;
    cout << mycount('i', "this is a string") << endl;
    cout << mycount('T', "this is a string") << endl;
    return 0;
}
