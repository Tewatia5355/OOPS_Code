#include <bits/stdc++.h>
using namespace std;

class space{
        int x;
        int y;
        int z;
    public:
        void put(int a,int b,int c)
        {
            x = a;
            y = b;
            z = c;
        }
        void get()
        {
            cout<<x<<" "<<y<<" "<<z<<"\n";
        }
        void operator-()
        {
            x = -x;
            y = -y;
            z = -z;
        }
        friend void operator-(space&);
};

void operator-(space& a)
{
    a.x = -a.x;
    a.y = -a.y;
    a.z = -a.z;
}

int main()
{
    space S;
    S.put(10,-20,30);
    cout<<"Initially -> ";
    S.get();
    
    // Calling operator- member function or friend function
    // -S; // can't use this if both way is defined, uncomment for use
    cout<<"Afterwards -> ";
    S.get();
    
    // different way for friend function
    operator-(S);
    cout<<"Afterwards -> ";
    S.get();
    
    // different way for friend function
    S.operator-();
    cout<<"Afterwards -> ";
    S.get();
    return 0;
}
