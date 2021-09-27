#include <iostream>
using namespace std;

int main()
{
    void *ptr;
    void *ptr2;
    int a = 50;
    char b = 'a';
    
    ptr = &a;
    ptr2 = &b;
    
    
    // you cannot directly dereference the void pointer
    // cout<< *ptr<<'\n';
    
    // typecast void pointer and then dereference
    cout<<*(int*)ptr<<"\n";
    cout<<*(char*)ptr2<<"\n";
}
