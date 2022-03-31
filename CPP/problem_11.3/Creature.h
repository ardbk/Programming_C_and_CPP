/*
 * CH-230-A
 * a11_p3.h
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#ifndef _CREATURE_H_
#define _CREATURE_H_
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
#endif