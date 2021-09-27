// Very important code to understand

#include<bits/stdc++.h>
using namespace std;

class invent1;

class invent2{
        int code;
        float value;
    public:
        invent2()
        {
            code = 0;value = 0;
        }
        
        invent2(int x,float y)
        {
            code = x;
            value = y;
        }
        
        void get()
        {
            cout<<"Code : "<<code<<"\n";
            cout<<"value: "<<value<<"\n";
        }
        
        // using constructor for type conversion
        invent2(invent1 p)
        {
            code = p.getcode();
            value = p.getitems() * p.getprice();
        } 
};

class invent1{
        int code;
        int items;
        float price;
    public:
        invent1(int a,int b,float c)
        {
            code = a;
            items = b;
            price = c;
        }
        
        void get()
        {
            cout<<"Code : "<<code<<"\n";
            cout<<"Items: "<<items<<"\n";
            cout<<"Price: "<<price<<"\n";
        }
        
        int getcode() {return code;}
        int getitems() {return items;}
        float getprice() {return price;}
        
        operator float(){return items*price;}
        
        // Using operator overloading for type conversion
        /* operator invent2() 
        {
            // invent2 temp;
            // temp.code = code; // will not work as private data
            // temp.value = price*items; // same reason
            return invent2(code,price*items);
        } */
};

int main()
{
    invent1 s(100,5,140.5);
    invent2 d;
    float total_value;
    
    // invent 1 to float
    total_value = s;
    
    // invent 1 to invent2
    // d = s;
    
    // calling operator overloading directly
    // d = s.operator invent2();
    
    // calling constructor directly
    // d = invent2(s);
    
    // But never declare both as it will be ambigious in case of 'd = s'
    
    cout<<"Details of invent1\n\n";
    s.get();
    cout<<"------------------------\n";
    
    cout<<"Details of invent2\n\n";
    d.get();
    cout<<"------------------------\n";
    
    cout<<"Details of total_value: "<<total_value<<"\n";
    cout<<"------------------------";
    
    return 0;
}