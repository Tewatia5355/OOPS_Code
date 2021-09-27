#include <iostream>
using namespace std;

int main()
{
    int a[5] = {3,5,7,9,11};
    int *b = a;
    
    
    // cout<<*++b<<"\n";
    // cout<<*(++b)<<"\n";
    
    // cout<<*b++<<"\n";
    // cout<<*(b++)<<"\n";
    
    // cout<<*(b+2)<<"\n";
    
    // out of bound prints garbage values
    cout<<*(b-2)<<"\n";
    return 0;
}
