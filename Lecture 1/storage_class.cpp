// Storage_class

#include <iostream>
using namespace std;

int a;
int main()
{
    {
        int b = 10;
        static int c = 15;
        register int d = 20;
        cout<<" Its external variable a->"<<a<<"\n";
        cout<<" Its auto variable b->"<<b<<"\n";
        cout<<" Its static variable c->"<<c<<"\n";
        cout<<" Its register variable d->"<<d<<"\n";
    }
    cout<<" Its external variable a->"<<a<<"\n";
    // cout<<" Its auto variable b->"<<b<<"\n";  //outside Scope 
    // cout<<" Its static variable c->"<<c<<"\n"; //outside Scope
    // cout<<" Its register variable d->"<<d<<"\n"; //outside Scope
    return 0;
}
