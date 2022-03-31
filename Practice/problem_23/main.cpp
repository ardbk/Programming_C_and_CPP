#include <iostream>
#include <stdexcept>

using namespace std;

int main () {
    int a = 1, b=0;

    try {
        if(b == 0){
            throw logic_error("Division by zero!");
        } else {
            cout << a/b << endl;
        }
    }
    catch (const logic_error& e) {
        cerr << e.what() << endl;
    }
    return 0;
}