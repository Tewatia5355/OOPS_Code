//local class

#include <bits/stdc++.h>
using namespace std;
void fun()
{
    class A{
        int data;
        public:
        void put(int x)
        {
            data = x;
        }
        void get()
        {
            cout<<data<<"\n";
        }
    };
    
    A ob;
    ob.put(200);
    ob.get();
}

int main()
{
    fun();
    // A tb;
    // tb.put(100);
    // tb.get();
    return 0;
}