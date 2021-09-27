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
    void put(int x,int y)
    {
        a = x;
        b = y;
    }
    // const member function
    void get() const 
    {
        cout<<a<<" "<<b<<"\n";
    }
};

int main()
{
    const Code A; 
    // A.put(5,60);
    A.get();
    
    
    return 0;
}
