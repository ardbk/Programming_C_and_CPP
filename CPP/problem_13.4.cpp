/*
 * CH-230-A
 * a13_p4.cpp
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include<iostream>
using namespace std;

class A
{
    int x;
public:
    void setX(int i) {x = i;}
    void print() { cout << x; }
};
//we made virtual base
class B: virtual public A
{
public:
    B()  { setX(10); }
};
//we made virtual base
class C: virtual public A
{
public:
    C()  { setX(20); }
};

class D: public B, public C {
};

/* Virtual base class in class B and in class C
 * helps to avoid duplication of class A for class A
 * Therefore, calling functions from A in class D will
 * have only one option.
 *
 * Without using virtual base, for both class B and class C,
 * class A was created. And the compiler didn't know
 * which function to call.
 */
int main()
{
    D d;
    d.print();
    return 0;
}