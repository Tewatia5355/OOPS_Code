// Memory allocation for single variable

#include <iostream>
using namespace std;

int main()
{
    int *a = new int;
    *a = 5;   // value is assigned afterwards
    int *b = new int(6);  // initialization and declaration in one statement
    cout<<a<<" "<<b<<"\n";
    cout<<*a<<" "<<*b<<"\n";
    delete a;
    delete b;
    return 0;
}
