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
    void get()
    {
        cout<<a<<" "<<b<<"\n";
    }
    ~Code()
    {
        cout<<"Hi there\n";
        
    }
};

int main()
{
    Code A; 
    A.get();
    
    Code B;
    B.put(10,2);
    B.get();
    
    return 0;
}
