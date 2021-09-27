//pointer to member of class

#include <bits/stdc++.h>
using namespace std;

class A{
    // int data;
    public:
    int data;
    void put(int x)
    {
        data = x;
    }
    void get()
    {
        cout<<data<<"\n";
    }
};
int A::*ip = &A::data;
int main()
{
    A ob;
    ob.put(100);
    cout<<ob.*ip<<" ";
    cout<<ob.data<<" ";
    A *ptr = &ob;
    cout<<ptr->*ip<<" ";
    cout<<ptr->data<<" ";
    return 0;
}