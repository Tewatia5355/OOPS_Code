// Reference variable

#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int &b = a;  //reference variable declaration and initialization
    cout<<a<<" "<<b<<'\n';
    a += 2;
    cout<<a<<" "<<b<<'\n';
    b += 3;
    cout<<a<<" "<<b<<'\n';
    return 0;
}


// Naam alag hai bs, bnda ek hi hai
