#include <bits/stdc++.h>
using namespace std;

class comp{
        float x;
        float y;
    public:
        comp() 
        {
            // see this will work too
        }
        
        comp(float real,float imag)
        { 
            x = real;
            y = imag;
        }
        
        comp operator+(comp C)
        {
            return comp(x+C.x,y+C.y);
        }
        
        void get()
        {
            cout<<x<<"+"<<y<<"i\n";
        }
        // friend comp operator+(comp,comp);
};

// comp operator+(comp A,comp B)
// {
//     return comp(A.x+B.x,A.y+B.y);
// }

int main()
{
    comp C1,C2,C3; // invokes constructor 1
    
    C1 = comp(2.5,3.5);
    C2 = comp(1.6,2.7);
    C3 = C1+C2; // can't use when both member function and friend function are declare
    
    // Using member function explicitly
    // C3 = C1.operator+(C2);
    
    // Using friend function 
    // C3 = operator+(C1,C2);
    
    // displaying variables
    cout<<"C1 = ";C1.get();
    cout<<"C2 = ";C2.get();
    cout<<"C3 = ";C3.get();
    
    return 0;
}
