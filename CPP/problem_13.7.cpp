/*
 * CH-230-A
 * a13_p7.cpp
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <iostream>
#include <cstring>
#include <exception>
using namespace std;
//creating a class Own Exception
class OwnException: public exception {
public:
    //destructor
    ~OwnException() {   }
    //we have to overwrite what() method
    const char *what() {
        return "OwnException\n";
    }
};
//creating a function which can throw four type of exception
void exceptionType(int a) {
    switch(a) {
        case 1:
            throw 'a';
        case 2:
            throw 12;
        case 3:
            throw true;
        case 4:
            throw OwnException();
    }
}

int main() {
    //try to call exception type
    //catch with parameter to know what type
    //of exception to catch
    //and print corresponding message
    try {
        exceptionType(1);
    } catch (char type) {
        cerr << "Caught in main: " << type << endl;
    }

    try {
        exceptionType(2);
    } catch (int type) {
        cerr << "Caught in main: " << type << endl;
    }

    try {
        exceptionType(3);
    } catch (bool type) {
        cerr << "Caught in main: " << type << endl;
    }

    try {
        exceptionType(4);
    } catch (OwnException& type) {
        cerr << "Caught in main: " << type.what() << endl;
    }

    return 0;
}
