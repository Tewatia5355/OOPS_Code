#include <iostream>
using namespace std;

class Code{
    int a;
    int b;
  public: 
    Code(int x, int y)
    {
        a = x;
        b = y;
    }
    void get()
    {
        cout<<a<<" "<<b<<"\n";
    }
};

int main()
{
    Code A(5,7); //Implicit calls
    A.get();
    
    Code B = Code(3,4); //Explicit calls
    B.get();
    
    return 0;
}
