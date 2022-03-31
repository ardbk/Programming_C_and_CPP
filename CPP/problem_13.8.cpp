/*
 * CH-230-A
 * a13_p8.cpp
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <iostream>
using namespace std;

class Motor {
public:
    Motor() {
        throw "This motor has problems";
    }
    ~Motor() {}
};

class Car {
private:
    Motor *motor;
public:
    Car() {
        try {
            motor = new Motor();
        } catch(const char *a) {
            throw a;
        }
    }
    ~Car() {}
};

class Garage {
private:
    Car *car;
public:
    Garage() {
        try {
            car = new Car();
        } catch (const char *a) {
            cerr << a << endl;
            throw "The car in this garage has problems with the motor";
        }
    }
    ~Garage() {}
    //additional method to run in grader without warning
    void print(){
        cout << "This is the last line in Programming C and C++ of 2020 Fall" << endl;
    }
};

int main() {
    Garage *temp;

    try {
        temp = new Garage();
        temp->print();
    } catch(const char* e) {
        cerr << e << endl;
        return 1;
    }

    return 0;
}