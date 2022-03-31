#include <iostream>
#include <string.h>

using namespace std;

class Car {
protected:
    string name;
    string modelName;
    double price;

public:
    Car(const string& newName, const string& newModelName, double newPrice);
    ~Car(){
        cout << "Bye" << endl;
    }
    void setModelName(const string &newModelName);
};

inline Car::Car(const string &newName, const string &newModelName, double newPrice) {
    name = newName;
    modelName = newModelName;
    price = newPrice;
}

inline void Car::setModelName(const string &newModelName) {
    modelName = newModelName;
}

class Taxi : public Car{
private:
    int num;
public:
    Taxi(const string& newName, const string& newModelName, double newPrice, int newNum);
    ~Taxi();
    void print();
};

Taxi::Taxi(const string &newName, const string &newModelName, double newPrice, int newNum) : Car(newName, newModelName, newPrice){
    num = newNum;
}

Taxi::~Taxi() {
    cout << "Bye Taxi" << endl;
}

void Taxi::print() {
    cout << "name: " << name << endl;
    cout << "modelname: " << modelName << endl;
    cout << "price: " << price << endl;
    cout << "passengers: " << num << endl;

}

int main() {
    Taxi a("BMW", "HUISEM", 1000, 3);
    a.print();
    return 0;
}
