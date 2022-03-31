/*
 * CH-230-A
 * a10_p7.cpp
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include <iostream>
#include <cstring>  // standard C string.h header file

using namespace std;

/*
	Naive string: the goal is to illustrate how copy constructors
	should be handled. See also charbuffer.cpp
*/

class NaiveString {
private:
    char *str;
public:
    NaiveString(const char*);
    NaiveString(const NaiveString&);
    ~NaiveString();
    void update(char oldChar, char newChar);
    void print();
};

NaiveString::NaiveString(const char* t) {
    cout << "Initializing a new NaiveString" << endl;
    str = new char[strlen(t) + 1];
    strcpy(str, t);
}

NaiveString::NaiveString(const NaiveString& src) {
    cout << "Copy constructor being called" << endl;
    str = new char[strlen(src.str) + 1];
    strcpy(str, src.str);
}

NaiveString::~NaiveString() {
    delete str;
}

void NaiveString::update(char oldChar, char newChar) {
    cout << "Update constructor being called" << endl;
    unsigned int i;
    for ( i = 0; i < strlen(str); i++)
        if (str[i] == oldChar)
            str[i] = newChar;
}

void funcByVal(NaiveString s) {
    cout << "funcByVal() being called" << endl;
    s.update('B', 'C');
    s.print();
}
//creating a function with a reference to NaiveString
void funcByRef(NaiveString& s) {
    //print that this function was called
    cout << "funcByRef() being called" << endl;
    //update NaiveString
    s.update('B', 'C');
    //print this NaiveString
    s.print();
}

void NaiveString::print() {
    cout << "Print constructor being called" << endl;
    cout << str << endl;
}

int main(int argc, char** argv)
{
    NaiveString a("aBcBdB");
    a.print();
    cout << "About to call funcByVal()" << endl;
    funcByVal(a);
    a.print();
    cout << "About to call funcByRef()" << endl;
    funcByRef(a);
    a.print();

}