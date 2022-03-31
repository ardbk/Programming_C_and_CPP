/*
 * CH-230-A
 * a12_p3.h
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
// simple class for fractions

#ifndef TOURNAMENTMEMBER_H_
#define TOURNAMENTMEMBER_H_

#include <string>

class TournamentMember{
protected:
    //parameters
    char firstName[36];
    char secondName[36];
    char dateOfBirth[11];
    std::string role;
    int salary;
public:
    //static property
    static std::string location;
    //constructors
    TournamentMember();
    TournamentMember(const char* newFirstName, const char* newSecondName, const char* newDateOfBirth,
                     const std::string& newRole, int newSalary);
    TournamentMember(TournamentMember& newMember);
    ~TournamentMember();
    //setter methods
    void setFirstName(const char* newFirstName);
    void setSecondName(const char* newSecondName);
    void setDateOfBirth(const char* newDateOfBirth);
    void setRole(std::string newRole);
    void setSalary(int newSalary);
    static void setLocation(std::string newLocation);
    //getter methods
    const char *getFirstName();
    const char *getSecondName();
    const char *getDateOfBirth();
    const std::string &getRole();
    int getSalary() const;
    static std::string getLocation();
    //change static property
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
inline void TournamentMember::setRole(const std::string newRole){
    role = newRole;
}
inline void TournamentMember::setSalary(int newSalary){
    salary = newSalary;
}
inline void TournamentMember::setLocation(const std::string newLocation) {
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

class Player : public TournamentMember{
private:
    //parameters
    int number, goals;
    std::string position, foot;
public:
    //constructors
    Player();
    Player(const char *newFirstName, const char *newSecondName, const char *newDateOfBirth, const std::string& newRole,
           int newSalary, int newNumber, int newGoals, const std::string& newPosition,
           const std::string& newFoot);
    Player(Player& newPlayer);
    ~Player();
    //setter methods
    void setNumber(int newNumber);
    void setPosition(const std::string &newPosition);
    void setFoot(const std::string &newFoot);
    //getter methods
    int getNumber() const;
    int getGoals() const;
    std::string getPosition() const;
    std::string getFoot() const;
    //printing method
    void print();
    //method to increment the number of goals
    void addGoal();
};

//setter methods
inline void Player::setNumber(int newNumber) {
    number = newNumber;
}
inline void Player::setPosition(const std::string &newPosition) {
    position = newPosition;
}
inline void Player::setFoot(const std::string &newFoot) {
    foot = newFoot;
}
//getter methods
inline int Player::getNumber() const {
    return number;
}
inline int Player::getGoals() const {
    return goals;
}
inline std::string Player::getPosition() const {
    return position;
}
inline std::string Player::getFoot() const {
    return foot;
}
//method to increment the number of goals
inline void Player::addGoal() {
    goals++;
}
#endif