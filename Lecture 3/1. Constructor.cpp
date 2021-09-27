#include <iostream>
using namespace std;

class Code{
    int a;
    int b;
  public: 
    Code()
    {
        a = 2;
        b = 3;
    }
    void get()
    {
        cout<<a<<" "<<b<<"\n";
    }
};

int main()
{
    Code A;
    A.get();
    return 0;
}
