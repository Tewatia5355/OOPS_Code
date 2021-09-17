// inline functions

#include <iostream>
using namespace std;

inline int add(int a, int b)
{
    return a+b;
}

int main()
{
    int a = 5;
    int b = 7;
    cout<<add(a,b)<<"\n";
    cout<<add(8,1)<<"\n";
    return 0;
}
