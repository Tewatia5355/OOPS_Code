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
        
        operator int()
        {
            return h*60+m;
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
    
    // Class to Basic type by multiple ways
    int x = T1;
    int y = (int)T1;
    cout<<x<<" "<<y<<"\n";
    return 0;
}