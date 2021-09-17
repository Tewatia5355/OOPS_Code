//class sample

#include <bits/stdc++.h>
using namespace std;

class student{
        string name;
        int roll_no;
    public:
        void put(int x, string y)
        {
            name = y;
            roll_no = x;
        }
        void get()
        {
            cout<<roll_no<<" "<<name;
        }
};

int main()
{
    student arjun;
    arjun.put(1,"arjun singh");
    arjun.get();
    return 0;
}
