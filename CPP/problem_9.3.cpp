/*
 * CH-230-A
 * a9_p3.cpp
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <iostream>
using namespace std;
//creating a function
float absolute(float num){
    //using condition
    if(num < 0){
        //if the number is lower than 0
        return num*(-1);
    }
    //if the number is higher than or equal to 0
    return num;
}

int main() {
    //initializing a variable float
    float num;
    //reading an input for this variable
    cin >>num;
    //printing result
    cout << "|" << num <<"| = " << absolute(num) <<endl;
    return 0;
}
