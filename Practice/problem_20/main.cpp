#include <iostream>

using namespace std;

class worker {
private:
    string name;
    int code;
public:
    worker();
    worker(int newCode, const string& newName);
    ~worker();
    friend ostream& operator <<(ostream& os, const worker& c);
};

worker::worker(){
    name = "default name";
    code = 0;
}

worker::worker(int newCode, const string& newName){
    name = newName;
    code = newCode;
}

worker::~worker(){	}

ostream& operator << (ostream& os, const worker& c){
    os << c.name << " has the code - " << c.code << endl;
    return os;
}

int main() {
    worker a(234, "John McEnroe");
    worker b(324, "Jack Nicholson");
    cout << a << b;
    return 0;
}
