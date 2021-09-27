#include <iostream>
using namespace std;

class Code{
    int a;
    int b;
  public: 
    Code();
    Code(int, int);
    void get()
    {
        cout<<a<<" "<<b<<"\n";
    }
};

Code::Code(int x, int y)
{
    a = x;
    b = y;
}

Code::Code()
{
    a = 2;
    b = 3;
}

int main()
{
    Code A(5,7); 
    A.get();
    
    Code B = Code(); 
    B.get();
    
    return 0;
}
