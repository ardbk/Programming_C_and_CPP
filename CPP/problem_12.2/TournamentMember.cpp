/*
 * CH-230-A
 * a12_p2.cpp
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include "TournamentMember.h"
#include <iostream>

using namespace std;
//assigning static location
string TournamentMember::location="Bremen";
//default constructor
TournamentMember::TournamentMember() {
    cout << "Default constructor is called ..." << endl;
    string tempFirstName = "default_first_name";
    for(int i=0; i<36; i++){
        firstName[i] = tempFirstName[i];
    }
    string tempSecondName = "default_second_name";
    for(int i=0; i<36; i++){
        secondName[i] = tempSecondName[i];
    }
    string tempDateOfBirth = "0000-00-00";
    for(int i=0; i<11; i++){
        dateOfBirth[i] = tempDateOfBirth[i];
    }
    role = "default_role";
    salary = 0;
}
//constructor with parameters
TournamentMember::TournamentMember(const char *newFirstName, const char *newSecondName, const char* newDateOfBirth,
                                   std::string newRole, int newSalary) {
    cout << "Parametric constructor is called ..." << endl;
    for(int i=0; i<36; i++){
        firstName[i] = newFirstName[i];
    }
    for(int i=0; i<36; i++){
        secondName[i] = newSecondName[i];
    }
    for(int i=0; i<11; i++){
        dateOfBirth[i] = newDateOfBirth[i];
    }
    role = newRole;
    salary = newSalary;

}
//copy constructor
TournamentMember::TournamentMember(TournamentMember& newMember) {
    cout << "Copy constructor is called ..." << endl;
    for(int i=0; i<36; i++){
        firstName[i] = newMember.firstName[i];
    }
    for(int i=0; i<36; i++){
        secondName[i] = newMember.secondName[i];
    }
    for(int i=0; i<11; i++){
        dateOfBirth[i] = newMember.dateOfBirth[i];
    }
    role = newMember.role;
    salary = newMember.salary;
}
//destructor
TournamentMember::~TournamentMember() {
    cout << "Destructor is called ..." << endl;
}
//printing method
void TournamentMember::print(){
    cout << "First name: " << firstName << endl;
    cout << "Second name: " << secondName << endl;
    cout << "Data of birth: " << dateOfBirth << endl;
    cout << "Role: " << role << endl;
    cout << "Salary: " << salary << endl;
    cout << "Location: " << location << endl;
}


