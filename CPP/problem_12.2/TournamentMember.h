/*
 * CH-230-A
 * a12_p2.h
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
// simple class for fractions

#ifndef TOURNAMENTMEMBER_H_
#define TOURNAMENTMEMBER_H_

#include <string>

class TournamentMember{
private:
    char firstName[36]{};
    char secondName[36]{};
    char dateOfBirth[11]{};
    std::string role;
    int salary;
public:
    //static property
    static std::string location;
    //constructors
    TournamentMember();
    TournamentMember(const char* newFirstName, const char* newSecondName, const char* newDateOfBirth,
                     std::string newRole, int newSalary);
    TournamentMember(TournamentMember& newMember);
    ~TournamentMember();
    //getter methods
    void setFirstName(const char* newFirstName);
    void setSecondName(const char* newSecondName);
    void setDateOfBirth(const char* newDateOfBirth);
    void setRole(std::string newRole);
    void setSalary(int newSalary);
    static void setLocation(std::string newLocation);
    //setter methods
    const char *getFirstName();
    const char *getSecondName();
    const char *getDateOfBirth();
    const std::string &getRole();
    int getSalary() const;
    static std::string getLocation();
    //change static property

    //printing method
    void print();
};

//setter methods
inline void TournamentMember::setFirstName(const char* newFirstName){
    for(int i=0; i<36; i++){
        firstName[i] = newFirstName[i];
    }
}
inline void TournamentMember::setSecondName(const char* newSecondName){
    for(int i=0; i<36; i++){
        secondName[i] = newSecondName[i];
    }
}
inline void TournamentMember::setDateOfBirth(const char* newDateOfBirth){
    for(int i=0; i<11; i++){
        dateOfBirth[i] = newDateOfBirth[i];
    }
}
inline void TournamentMember::setRole(std::string newRole){
    role = newRole;
}
inline void TournamentMember::setSalary(int newSalary){
    salary = newSalary;
}
inline void TournamentMember::setLocation(std::string newLocation) {
    location = newLocation;
}
//getter methods
inline const char *TournamentMember::getFirstName() {
    return firstName;
}
inline const char *TournamentMember::getSecondName() {
    return secondName;
}
inline const char *TournamentMember::getDateOfBirth() {
    return dateOfBirth;
}
inline const std::string &TournamentMember::getRole() {
    return role;
}
inline int TournamentMember::getSalary() const {
    return salary;
}
inline std::string TournamentMember::getLocation() {
    return location;
}
#endif