/*
 * CH-230-A
 * a9_p6.cpp
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <iostream>
using namespace std;
//creating a function
int myFirst(int arr[], int size){
    //using a loop to through each element
    for(int i =0; i<size; i++){
        //check if the conditions are true
        if(arr[i]%2 == 0 && arr[i] > 0){
            //return if the conditions are true
            return arr[i];
        }
    }
    return -1;
}
//creating a function
double myFirst(double arr[], int size){
    //using a loop to through each element
    for(int i =0; i<size; i++){
        //check if the conditions are true
        if(arr[i] == (int)arr[i] && arr[i] < 0){
            //return if the conditions are true
            return arr[i];
        }
    }
    return -1.1;
}
//creating a function
char myFirst(char arr[], int size){
    //using a loop to through each element
    for(int i =0; i<size; i++){
        //be sure that all char is lowercase
        arr[i] = (char)tolower(arr[i]);
        //check if the conditions are true
        if(arr[i] == 'b' || arr[i] == 'c' || arr[i] == 'd' || arr[i] == 'f' || arr[i] == 'g' || arr[i] == 'h' ||
                arr[i] == 'j' || arr[i] == 'k' || arr[i] == 'l' || arr[i] == 'm' || arr[i] == 'n' || arr[i] == 'p' ||
                arr[i] == 'q' || arr[i] == 'r' || arr[i] == 's' || arr[i] == 't' || arr[i] == 'v' || arr[i] == 'w' ||
                arr[i] == 'x' || arr[i] == 'y' || arr[i] == 'z'){
            //return if the conditions are true
            return arr[i];
        }
    }
    return '0';
}

int main() {
    //checking for all different conditions
    int arrInt1[] = {1, -2, 4, 6, -36};
    int arrInt2[] = {1, 1, 1, 1, 1};
    double arrDouble1[] = {1.0, -2.5, -3.0, -4.0, 2.54};
    double arrDouble2[] = {1.0, 1.0, 1.0, 1.0, 1.0};
    char arrChar1[] = {'a', 'b', 'd', 'e'};
    char arrChar2[] = {'a', 'a', 'a', 'a', 'a'};
    cout << myFirst(arrInt1, sizeof(arrInt1)/sizeof(arrInt1[0])) << endl;
    cout << myFirst(arrInt2, sizeof(arrInt2)/sizeof(arrInt1[0])) << endl;
    cout << myFirst(arrDouble1, sizeof(arrDouble1)/sizeof(arrDouble1[0])) << endl;
    cout << myFirst(arrDouble2, sizeof(arrDouble2)/sizeof(arrDouble2[0])) << endl;
    cout << myFirst(arrChar1, sizeof(arrChar1)/sizeof(arrChar1[0])) << endl;
    cout << myFirst(arrChar2, sizeof(arrChar2)/sizeof(arrChar2[0])) << endl;
    return 0;
}
