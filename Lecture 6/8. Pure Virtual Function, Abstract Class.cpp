#include <iostream>
using namespace std;
 
// Base Class, Abstract Class because of pure virtual function 
class BaseClass {
public:
    int var_base;
    virtual void display() = 0;
};
 
// Class derived from the Base Class
class DerivedClass : public BaseClass {
public:
    int var_derived;
    // redeclaration of pure virtual function from inherited Base class
    void display()
    {
        cout << "var_base: " << var_base << endl;
        cout << "var_derived: "<< var_derived << endl;
    }
};
 
// Driver Code
int main()
{
    // BaseClass a; // Can't make objects of Abstract classes 
    DerivedClass b;
    b.var_base = 10;
    b.var_derived = 20;
    b.display();
    
    return 0;
}