// Function overloading

#include <bits/stdc++.h>
using namespace std;

int add(int a, int b)
{
    return a+b;
}

int add(int a,int b,int c)
{
    return a+b+c;
}

string add(string a, string b)
{
    return a+" -> "+b;
}

int main()
{
    cout<<add(5,6)<<"\n";
    cout<<add(5,6,7)<<"\n";
    cout<<add("Yash","Tewatia")<<"\n";
    return 0;
}
