//outside and inside class member function

#include <bits/stdc++.h>
using namespace std;

class student{
        string name;
        int roll_no;
    public:
        void put(int, string); //just declaration
        //inline
        void get()
        {
            cout<<roll_no<<" "<<name;
        }
};
// nested member function
void student::put(int x, string y)
{
    get();
    name = y;
    roll_no = x;
    get();
}
int main()
{
    student arjun;
    arjun.put(1,"arjun singh");
    arjun.get();
    return 0;
}
