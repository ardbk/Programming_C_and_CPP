/*
 * CH-230-A
 * a11_p2.cpp
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <iostream>

using namespace std;
//class Creature
class Creature {
public:
    //constructor
    Creature();
    //method
    void run() const;
protected:
    //parameters of the class
    int distance;
};
//Creature's constructor
Creature::Creature(): distance(10) {
    //printing corresponding message
    cout << "Calling Creature default constructor" << endl;
}
//Creature's method
void Creature::run() const {
    //printing corresponding result
    cout << "running " << distance << " meters!\n";
}
//class Animals inherited from Creature
class Animals : public Creature {
private:
    //parameters of the class
    double size;
public:
    //Constructor
    Animals();
    //method
    void step() const;
};
//Animals' constructor
Animals::Animals() : size(1.5) {
    //printing corresponding message
    cout << "Calling Animals default constructor" << endl;
}
//Animals' method
void Animals::step() const {
    //printing corresponding result
    cout << (distance / size) << " steps was made!" << endl;
}
//class Vehicle inherited from Creature
class Vehicle : public Creature {
private:
    //parameters of the class
    int totalDistance;
    double speed;
public:
    //Constructor
    Vehicle();
    //method
    void leftDistance() const;
    void time() const;
};
//Vehicle's constructor
Vehicle::Vehicle() : totalDistance(25), speed(40.5) {
    //printing corresponding message
    cout << "Calling Vehicle default constructor" << endl;
}
//Vehicle's method
void Vehicle::leftDistance() const {
    //printing corresponding result
    cout << (totalDistance-distance) << " meters left" <<  endl;
}
//Vehicle's method
void Vehicle::time() const {
    //printing corresponding result
    cout << (distance / speed) << " minutes already passed" << endl;
}
//class Wizard inherited from Creature
class Wizard : public Creature {
public:
    //constructor
    Wizard();
    //method
    void hover() const;
private:
    //parameters of the class
    int distFactor;
};
//Wizard's constructor
Wizard::Wizard() : distFactor(3) {
    //printing corresponding message
    cout << "Calling Vehicle default constructor" << endl;
}
//Wizard's method
void Wizard::hover() const {
    //printing corresponding result
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}

int main() {
    //creating using constructors and testing corresponding methods
    cout << "Creating an Creature.\n";
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

    //another instance
    cout << "\nCreaing a Wizard.\n";
    Wizard w2;
    w2.run();
    w2.hover();

    cout << "\nCreating an Animal.\n";
    Animals a;
    a.run();
    a.step();

    cout << "\nCreating an Vehicle.\n";
    Vehicle v;
    v.run();
    v.leftDistance();
    v.time();

    return 0;
} 