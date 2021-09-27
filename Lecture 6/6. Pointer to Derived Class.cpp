#include <iostream>
using namespace std;
 
// Base Class
class BaseClass {
public:
    int var_base;
    void display()
    {
        cout << "var_base: " << var_base << endl;
    }
};
 
// Class derived from the Base Class
class DerivedClass : public BaseClass {
public:
    int var_derived;
    void display()
    {
        cout << "var_base: " << var_base << endl;
        cout << "var_derived: "<< var_derived << endl;
    }
};
 
// Driver Code
int main()
{
    // Pointer to base class
    BaseClass* base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
//  ------------------------------------------------

    // Pointing to derived class
    base_class_pointer = &obj_derived;
    base_class_pointer->var_base = 34;
    
    // Calling base class member function
    base_class_pointer->display();
//  ------------------------------------------------
 
    base_class_pointer->var_base = 3400;
    base_class_pointer->display();
 
    DerivedClass* derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_base = 9448;
    derived_class_pointer->var_derived = 98;
    derived_class_pointer->display();
 
    return 0;
}