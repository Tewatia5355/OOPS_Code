#include <iostream>
using namespace std;

class Code{
  public: 
    int a;
    int b;
    Code()
    {
        a = 0;
        b = 0;
    }
    Code(Code &);
    void put(int x,int y)
    {
        a = x;
        b = y;
    }
    void get()
    {
        cout<<a<<" "<<b<<"\n";
    }
};

Code::Code(Code &temp)
{
    a = temp.a;
    b = temp.b;
}

int main()
{
    Code A; // Normal Constructor 
    A.put(4,7); // Assigning values
    A.get();
    
    Code B = A; // Copy Constructor
    B.get();
    
    Code C(B); // Copy Constructor
    C.get();
    
    Code D; // Only Declaration
    D = C;  // Operator Overloading
    D.get();
    
    return 0;
}
