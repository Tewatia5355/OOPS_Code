//friend function

#include <bits/stdc++.h>
using namespace std;
class B;
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
    friend void swap(A &x, B &y);
};

class B{
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
    friend void swap(A &x, B &y);
};

void swap(A &x, B &y)
{
    int temp = x.data;
    x.data = y.data;
    y.data = temp;
}

int main()
{
    A alpha;
    B beta;
    alpha.put(10);
    beta.put(20);
    swap(alpha,beta);
    alpha.get();
    beta.get();
}