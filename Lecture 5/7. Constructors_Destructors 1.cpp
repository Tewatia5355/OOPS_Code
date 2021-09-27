// C++ program to show the order of constructor calls
// in Multiple Inheritance

#include <iostream>
using namespace std;

// first base class
class Parent1
{

public:
    // first base class's Constructor
    Parent1()
    {
        cout << "Constructor: Inside first base class" << endl;
    }
    ~Parent1()
    {
        cout << "Destructor: Inside first base class" << endl;
    }
};

// second base class
class Parent2
{
public:
    // second base class's Constructor
    Parent2()
    {
        cout << "Constructor: Inside second base class" << endl;
    }
    ~Parent2()
    {
        cout << "Destructor: Inside second base class" << endl;
    }
};

// child class inherits Parent1 and Parent2
class Child : public Parent1, public Parent2
{
public:
    // child class's Constructor
    Child()
    {
        cout << "Constructor: Inside child class" << endl;
    }
    ~Child()
    {
        cout << "Destructor: Inside child class" << endl;
    }
};

// main function
int main()
{

    // creating object of class Child
    Child obj1;
    return 0;
}