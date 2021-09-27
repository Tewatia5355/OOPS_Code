#include<bits/stdc++.h>
using namespace std;

class ti{
      int h;
      int m;
    public:
        ti()
        {}
        
        ti(int t)
        {
            h = t/60;
            m = t%60;
        }
        
        void get()
        {
            cout<<h<<" hrs and "<<m<<" mins\n"; 
        }
        
};


int main()
{
    ti T1; // default constructor is called
    int d = 85;
    T1 = d; // int to class conversion
    T1.get();
    return 0;
}