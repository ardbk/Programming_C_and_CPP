/*
 * CH-230-A
 * a13_p5.cpp
 * Aidyn Ardabek
 * aardabek@jacobs-university.de
*/
#include<iostream>
using namespace std;

class A
{
    int x;
public:
    A(){ x = 10; }
    A(int i) { x = i; }
    void print() { cout << x; }
};

class B: virtual public A
{
public:
    B() : A(10) {}
};

class C:  virtual public A
{
public:
    C(): A(10) {}
};

class D: public B, public C {
//public:
//    D() : A(10) {   }
};

/* Since the compiler don't know how to initialize class A,
 * (we didn't write it)
 * but knows how to initialize class B and class C,
 * it tries to call the default constructor for A, B, and C
 * but there is no default constructor for A.
 * So, it gives error
 * But I wrote default constructor for A and now the compiler
 * can call default constructor of class A
 */

int main()
{
    D d;
    d.print();
    return 0;
}