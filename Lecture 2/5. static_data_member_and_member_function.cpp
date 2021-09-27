//static data member and static member function

#include <bits/stdc++.h>
using namespace std;

class student{
        static int count;
        string name;
        int roll_no;
    public:
        static int counter()
        {
            // cout<<roll_no<<"\n";
            cout<<count<<"\n";
        }
        void put(int, string); //just declaration
        //inline
        void get()
        {
            cout<<roll_no<<" "<<name;
        }
};
int student:: count;
// nested member function
void student::put(int x, string y)
{
    name = y;
    roll_no = x;
    count+=2;
}
int main()
{
    student arjun;
    arjun.put(1,"arjun singh");
    arjun.get();
    student::counter();
    return 0;
}
